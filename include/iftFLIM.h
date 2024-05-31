/**
 * @file 
 * @brief FLIM: Feature Learning From Image Markers -- functions to
 * learn the parameters of a sequence of convolutional layers from
 * image markers and employ the resulting model for feature extraction.
 * 
 * @note <b>Programs:</b>
 * * @ref iftFLIM-LearnModel.c = Learns the CNN model
 * * @ref iftFLIM-ExtractFeatures.c = Extracts image features.
 */

#ifndef IFT_FLIM_H
#define IFT_FLIM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "iftMatrix.h"
#include "iftDataSet.h"
#include "iftMImage.h"
#include "iftAdjacency.h"
#include "ift/core/dtypes/Dict.h"
#include "ift/core/io/Dir.h"
#include "ift/core/io/Json.h"
#include "iftIterativeOPF.h"
#include "iftKmeans_v2.h"

typedef struct _iftFLIMLayer {
  int  kernel_size[3];      /* kernel sizes along x, y, and z */
  int  dilation_rate[3];    /* dilation rates sx, sy, sz */
  int  nkernels_per_image;  /* number of filters (kernels, output channels) per image */
  int  nkernels_per_marker; /* number of filters (kernels) per marker */
  int  noutput_channels;    /* final number of filters (kernels, output channels) in a consensus layer from several training images */
  bool relu;                /* with (true) or without (false) relu */
  char *pool_type;          /* "no_pool, avg_pool, max_pool" */
  int  pool_size[3];        /* pooling sizes align x, y, and z */
  int  pool_stride;         /* pooling stride */
  int  *skip_connection;    /* index of the layers to apply skip connection */
  bool topology;
} iftFLIMLayer;

typedef struct _iftFLIMArch {
  int nlayers;                  /* number of layers */
  iftFLIMLayer *layer;          /* convolutional layer */
  float stdev_factor;           /* an adjustment parameter for marker-based normalization */
  bool apply_intrinsic_atrous;  /* intrinsic dilation meant to take the pooling stride into consideration during training*/
} iftFLIMArch;

void iftStatisticsFromAllSeeds(iftFileSet *fs_seeds, char *inputdata_dir, float *mean, float *stdev, float stdev_factor);
void iftNormalizeImageByZScore(iftMImage *img, float *mean, float *stdev);
iftDataSet *iftComputeSeedDataSet(iftMImage *img, iftLabeledSet *S, iftAdjRel *A, int nsamples);
iftMatrix *iftComputeKernelBank(iftDataSet *Z, int *ngroups, uchar grouping_method, iftKmeansDistance distance);
void iftWriteMeanStdev(char *basepath, float *mean, float *stdev, int ninput_channels);
iftMatrix *iftSelectRelevantKernelsByPCA(iftMatrix *kernels, int number_of_kernels,float stdev_factor);
iftMatrix *iftSelectRelevantKernelsByKmeans(iftMatrix *K, int ngroups, iftKmeansDistance distance);
iftMImage *iftReadInputMImage(char *filename);


void iftReadMeanStdev(char *basepath, float *mean, float *stdev, int ninput_channels);
float *iftReadBias(char *basepath);
void iftWriteBias(char *basepath, float *bias, int number_of_kernels);

/**
 * @brief Reads a .json file with the architecture of a FLIM network
 * for feature extraction.
 * @author  Alexandre Falcão.
 * @date    Mar, 2021.
 * @ingroup Description
 *
 * @param  filename: the archtecture of a FLIM network
 * @return the FLIM architecture with its hyperparameters 
 */
//! swig(newobject)
  iftFLIMArch *iftReadFLIMArch(char *filename);

/**
* @brief Writes a .json file with the architecture of a FLIM network.
* @author  Azael Sousa.
* @date    July, 2021.
* @ingroup Description
*
* @param  arch: the archtecture of a FLIM network
* @param  filename: path to the architecture
*/
//! swig(newobject)
  void iftWriteFLIMArch(iftFLIMArch *arch, char *filename);
  
/**
 * @brief Destroys the architecture of a FLIM network from memory.
 * @author  Alexandre Falcão.
 * @date    Mar, 2021.
 * @ingroup Description
 *
 * @param the FLIM architecture with its hyperparameters 
 */
  void iftDestroyFLIMArch(iftFLIMArch **arch);
  
  /**
 * @brief Train a FLIM model.
 * @param layer   Layer to train.
 * @param param_dir       Directory to write the FLIM model.
 * @param orig_dir        Directory with the input of layer 1.
 * @param seeds_dir       Directory with the seeds files.
 */

void iftFLIMTrain(int layer, char *param_dir, char *orig_dir, char *seeds_dir);

/**
 * @brief Learns the FLIM model from input markers on original images,
 * by following a given network architecture, and saves the parameters
 * into an output folder.
 * @author  Alexandre Falcão.
 * @date    Mar, 2021.
 * @ingroup Description
 *
 * @param orig_dir        : input folder with the original images.
 * @param image_list      : input file (.csv) with a list of images from orig_dir for training.
 * @param markers_dir     : input folder with markers on a few original images.
 * @param param_dir       : output folder to save the parameters - weights, mean and standard deviation arrays of each convolutional layer.
 * @param arch            : a given FLIM network architecture.
 */
//! swig()
  void iftFLIMLearnModel(char *orig_dir, char *markers_dir, char *param_dir, iftFLIMArch *arch);
  
/**
 * @brief Similar to iftFLIMLearnModel, but learns a FLIM model using
 * a different marker set for the normalization parameters and kernels. 
 * It follows a given network architecture, and saves
 * the parameters into an output folder.
 * @author  Leonardo Melo.
 * @date    Sep, 2023.
 * @ingroup Description
 *
 * @param orig_dir                  : input folder with the original images.
 * @param image_list                : input file (.csv) with a list of images from orig_dir for training.
 * @param markers_dir               : input folder with markers on a few original images for learning the kernels.
 * @param normalization_markers_dir : input folder with markers on a few original images for learning the normalization parameters.
 * @param param_dir                 : output folder to save the parameters - weights, mean and standard deviation arrays of each convolutional layer.
 * @param arch                      : a given FLIM network architecture.
 */
//! swig()
  void iftFLIMLearnModelWithDettachedNormalization(char *orig_dir, char *markers_dir, char *normalization_markers_dir, char *param_dir, iftFLIMArch *arch);

/**
 * @brief Similar to iftFLIMLearnModel, but uses all pixels for
 * learning the normalization parameters, and uses markers only for 
 * learning the kernels. It follows a given network architecture, 
 * and saves the parameters into an output folder.
 * @author  Leonardo Melo.
 * @date    Sep, 2023.
 * @ingroup Description
 *
 * @param orig_dir        : input folder with the original images.
 * @param image_list      : input file (.csv) with a list of images from orig_dir for training.
 * @param markers_dir     : input folder with markers on a few original images.
 * @param param_dir       : output folder to save the parameters - weights, mean and standard deviation arrays of each convolutional layer.
 * @param arch            : a given FLIM network architecture.
 */  
//! swig()
  void iftFLIMLearnModelWithFullNormalization(char *orig_dir, char *markers_dir, char *param_dir, iftFLIMArch *arch);
  /* Functions in development and test phases */

  void iftFLIMLearnModelPCA(char *orig_dir, char *markers_dir, char *param_dir, iftFLIMArch *arch);


/**
* @brief Learns the FLIM layer from input markers on original images,
* by following a given network architecture, and saves the parameters
* into an output folder.
* @author  Azael Sousa.
* @date    Mar, 2021.
* @ingroup Description
*
* @param orig_dir        : input folder with the original images.
* @param image_list      : input file (.csv) with a list of images from orig_dir for training.
* @param markers_dir     : input folder with markers on a few original images.
* @param param_dir       : output folder to save the parameters - weights, mean and standard deviation arrays of each convolutional layer.
* @param layer_index     : input index of the layer which will be trained.
* @param arch            : a given FLIM network architecture.
*/
//! swig()
void iftFLIMLearnLayer(char *activ_dir, char *markers_dir, char *param_dir, int param_index, iftFLIMArch *arch, char *output_dir);
  
  
void FLIMExtractFeaturesFromLayer(int layer, char *param_dir, char *orig_dir, char *seeds_dir, bool write_img);
  
/**
 * @brief Extract image features using a given FLIM model with parameters, and save the features into an output folder.
 * @author  Alexandre Falcão.
 * @date    Mar, 2021.
 * @ingroup Description
 *
 * @param orig_dir        : input folder with the original images. 
 * @param image_list      : input file (.csv) with a list of images from orig_dir for feature extraction.
 * @param arch            : input FLIM network architecture. 
 * @param param_dir       : input folder with the parameters of the FLIM model.
 * @param feat_dir        : output folder with the resulting image features. 
 * @param object_dir      : optional input folder with object masks.
 * @param device          : CPU: -1, GPU: device number (0, 1,...). 
 */
//! swig()
  void iftFLIMExtractFeatures(char *orig_dir, char *image_list, iftFLIMArch *arch, char *param_dir, char *feat_dir, char *object_dir, int device);
  int iftFLIMBatchSizeCPU(iftFLIMArch *arch, int input_image_nvoxels, int input_image_nchannels);

/**
* @brief Extract image features using a given FLIM layer with parameters, and save the features into an output folder.
* @author  Azael Sousa.
* @date    Mar, 2021.
* @ingroup Description
*
* @param orig_dir        : input folder with the original images.
* @param image_list      : input file (.csv) with a list of images from orig_dir for feature extraction.
* @param arch            : input FLIM network architecture.
* @param param_dir       : input folder with the parameters of the FLIM model.
* @param layer_index     : index of the layer kernels that will be loaded.
* @param feat_dir        : output folder with the resulting image features.
* @param object_dir      : optional input folder with object masks.
* @param device          : CPU: -1, GPU: device number (0, 1,...).
*/
//! swig()
  void iftFLIMExtractFeaturesFromLayer(char *orig_dir, char *image_list, iftFLIMArch *arch, char *param_dir, int layer_index,
                                     char *feat_dir, char *object_dir, int device);


/**
 * @brief Compute average pooling.
 * @author  Alexandre Falcão.
 * @date    Jun, 2021.
 * @ingroup Description
 *
 * @param img: input multiband image
 * @param width, height, depth: adjacency sizes in 3D
 * @param stride: pooling stride 
 * @return resulting image
 */
//! swig()
//iftMImage     *iftFLIMAveragePooling(iftMImage *img, int width, int height, int depth, int stride);
iftMImage     *iftFLIMAtrousAveragePooling(iftMImage *img, int width, int height, int depth, int atrous_factor, int stride);

/**
 * @brief Compute max pooling.
 * @author  Alexandre Falcão.
 * @date    Jun, 2021.
 * @ingroup Description
 *
 * @param img: input multiband image
 * @param width, height, depth: adjacency sizes in 3D
 * @param stride: pooling stride 
 * @return resulting image
 */
//! swig()
//iftMImage     *iftFLIMMaxPooling(iftMImage *mimg, int width, int height, int depth, int stride);
iftMImage     *iftFLIMAtrousMaxPooling(iftMImage *mimg, int width, int height, int depth, int atrous_factor, int stride);


/**
 * @brief Manually select kernels from a kernel bank
 * @author  Azael Sousa.
 * @date    Jun, 2021.
 * @ingroup Description
 *
 * @param kernel_bank_path:       path to the original kernel bank (.npy)
 * @param selected_kernels_path:  json file with selected kernels (.json)
 * @return output_kernel_bank:    output kernel bank with selected kernels
 */
//! swig()
iftMatrix *iftFLIMSelectKernelsManual(char *kernel_bank_path, char *selected_kernels_path);


/**
 * @brief Learns the FLIM model from input markers on original images,
 * by following a given network architecture, and saves the parameters.
 * Kernels are computed with bias and trained with SGD.
 * @author  Azael Sousa.
 * @date    Jun, 2021.
 * @ingroup Description
 *
 * @param orig_dir        : input folder with the original images.
 * @param image_list      : input file (.csv) with a list of images from orig_dir for training.
 * @param markers_dir     : input folder with markers on a few original images.
 * @param param_dir       : output folder to save the parameters - weights, mean and standard deviation arrays of each convolutional layer.
 * @param arch            : a given FLIM network architecture.
 */
void iftFLIMLearnModelWithSGD(char *orig_dir, char *markers_dir, char *param_dir, iftFLIMArch *arch);

/**
 @brief Extract image features using a given FLIM model trained with SGD, and save the features into an output folder.
 * @author  Azael Sousa.
 * @date    Oct, 2021.
 * @ingroup Description
 *
 * @param orig_dir        : input folder with the original images.
 * @param image_list      : input file (.csv) with a list of images from orig_dir for feature extraction.
 * @param arch            : input FLIM network architecture.
 * @param param_dir       : input folder with the parameters of the FLIM model.
 * @param feat_dir        : output folder with the resulting image features.
 * @param object_dir      : optional input folder with object masks.
 * @param device          : CPU: -1, GPU: device number (0, 1,...).
 */
void iftFLIMExtractFeaturesWithBIAS(char *orig_dir, char *image_list, iftFLIMArch *arch, char *param_dir, char *feat_dir, char *object_dir, int device);


/**
 * @brief Create an adjacency relation based on the kernel parameters for a given layer.
 * @author  Alexandre Falcão.
 * @date    Jun, 2021.
 * @ingroup Description
 *
 * @param layer: parameters of a given FLIM layer. 
 * @param dim3D: boolean that indicates when the adjacency relation is 3D/2D.
 * @return adjacency relation
 */
//! swig()
iftAdjRel *iftFLIMAdjRelFromKernel(iftFLIMLayer layer, bool dim3D);

/**
 * @brief Create an adjacency relation based on the kernel parameters for a given layer taking into account stride by means of a corresponding atrous factor.
 * @author  Alexandre Falcao.
 * @date    Nov, 2022.
 * @ingroup Description
 *
 * @param layer: parameters of a given FLIM layer.
 * @param atrous_factor: atrous dilation factor to account for stride 
 *                       during training. 
 * @param dim3D: boolean that indicates when the adjacency relation is 3D/2D.
 * @return adjacency relation
 */
//! swig()
iftAdjRel *iftFLIMAdaptiveAdjRelFromKernel(iftFLIMLayer layer, int atrous_factor, bool dim3D);
  

/**
 * @brief   Convert a standard FLIM model to the biased version
 * @author  Matheus Cerqueira.
 * @date    May, 2023.
 *
 * @param arch: FLIM architecture
 * @param ninput_channels: number of input channels of the fist layer.
 * @param param_dir: Input dir with non-bias FLIM model
 * @param output_dir: Output dir to save the converted Bias FLIM model.
 * @return void
 */
void iftFLIMConvertModel2BIAS(iftFLIMArch *arch, int ninput_channels, char * param_dir, char * output_dir);

/**
 * @brief   Learn adaptive weights for decoder
 * @author  Leo Melo.
 * @date    Nov, 2023.
 *
 * @param mimg: Feature image.
 * @param mean_bias: value from [0-1] to remove extreme filters. (0 for not using).
 * @return weight vector as a float array
 */
float *RobustAdaptiveWeights(iftMImage *mimg, float mean_bias);


/**
 * @brief   Decode feature using adaptive unsupervised weighs
 * @author  Leo Melo.
 * @date    Nov, 2023.
 *
 * @param features: MImage with features.
 * @param scale: original image size (array of size 2 or 3 for 3D).
 * @param mean_bias: value from [0-1] to remove extreme filters. (0 for not using).
 * @return saliency map as iftImage
 */
//! swig()
iftImage *iftAdaptiveDecoder(iftMImage *features, float *scale, float mean_bias);

/**
 @brief Extract and decode image features using a given FLIM model trained, and save the features into an output folder.
 * @author  Leo Melo.
 * @date    Nov, 2023.
 * @ingroup Description
 *
 * @param orig_dir        : input folder with the original images.
 * @param image_list      : input file (.csv) with a list of images from orig_dir for feature extraction.
 * @param arch            : input FLIM network architecture.
 * @param param_dir       : input folder with the parameters of the FLIM model.
 * @param output_dir      : output folder with the resulting decoded image features.
 * @param object_dir      : optional input folder with object masks.
 * @param mean_bias       : bias to consider a map foreground.
 * @param filter_by_area  : Whether or not (1,0) to filter the coded saliency map components by size.
 * @param device          : CPU: -1, GPU: device number (0, 1,...).
 */
//! swig()
void iftFLIMRunFullNetwork(char *orig_dir, char *image_list, iftFLIMArch *arch, char *param_dir,
                           char *output_dir, int device, float mean_bias, int filter_by_area, char *object_dir);

/**
 * @brief   Decode all feature images using adaptive unsupervised weighs
 * @author  Leo Melo.
 * @date    Nov, 2023.
 *
 * @param features_dir: Directory with MImages.
 * @param output_dir: Directory to save the output saliency maps.
 * @param scale: original image size (array of size 2 or 3 for 3D).
 * @param mean_bias: value from [0-1] to remove extreme filters. (0 for not using).
 * @return void
 */
//! swig()
void iftFLIMAdaptiveDecodeFolder(char *features_dir, char *output_dir, char *orig_dir, float mean_bias, int filter_by_area);

/**
 * @brief   Filter components based on area in saliency map
 * @author  Leo Melo.
 * @date    Nov, 2023.
 *
 * @param saliency: Saliency map.
 * @param min_size: Minimum area to keep.
 * @param max_size: Maximum area to keep.
 * @return Filtered Saliency Map.
 */
//! swig()
iftImage *iftFilterComponentsByArea(iftImage *saliency, int min_size, int max_size);

#ifdef __cplusplus
}
#endif


#endif
