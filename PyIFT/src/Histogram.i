%include "iftImage.i"
%include "iftMImage.i"



typedef struct {
    /** Number of bins */
    long nbins;
    /** Histogram array */
    float *val;
} iftHist;

%extend iftHist {

	PyObject* AsList() {
	    iftHist *hist = ($self);
	
	    PyObject *list = PyList_New(hist->nbins);
	    
	    for(int i = 0; i < hist->nbins; i++){
	        double val = (double) hist->val[i];
	        PyList_SetItem(list, i, PyFloat_FromDouble(val));
	    }
	
	    return list;
	}
	
	void FromList(PyObject* list) {
	    iftHist* hist = ($self);
	
	    free(hist->val);
	    hist->nbins = PyList_Size(list);
	    hist->val = iftAlloc(hist->nbins, sizeof(float));
	
	    for(int i = 0; i < hist->nbins; i++){
	        float val = (float) PyFloat_AsDouble(PyList_GetItem(list, i));
	        hist->val[i] = val;
	    }
	}
	
	PyObject* AsNumPy() {
	    iftHist* hist = ($self);
	
	    npy_intp dims[1] = {hist->nbins};
	    PyArrayObject* ref = PyArray_SimpleNewFromData(1, dims, NPY_FLOAT32, (float*) hist->val);
	    PyArrayObject* npy = PyArray_SimpleNew(1, dims, NPY_FLOAT32);
	    PyArray_CopyInto(npy, ref);
	
	    return PyArray_Return(npy);
	}
	
	void FromNumPy(PyObject* input) {
	
	    PyArrayObject* ary = obj_to_array_no_conversion(input, NPY_FLOAT32);
	
	    if (ary == NULL) return;
	
	    if(PyArray_TYPE(ary) != NPY_FLOAT32){
	        SWIG_Error(12, "Input must be a numpy double array");
	    }
	
	    iftHist* hist = ($self);
	
	    require_dimensions(ary, 1);
	
	    hist->nbins = array_size(ary, 0);
	    hist->val = iftAlloc(hist->nbins, sizeof(float));
	
	    float* data = (float*) array_data(ary);
	    memcpy(hist->val, data, hist->nbins * sizeof(float));
	}
	
	

	~iftHist() {
		iftHist* ptr = ($self);
		iftDestroyHist(&ptr);
	}
};

%newobject iftCreateHist;
%feature("autodoc", "2");
iftHist *iftCreateHist(long nbins);

%feature("autodoc", "2");
void iftWriteHistogram(iftHist *hist, char *filename);

%newobject iftReadHistogram;
%feature("autodoc", "2");
iftHist *iftReadHistogram(char *filename);

%feature("autodoc", "2");
void iftPrintHist(   iftHist *hist);

%newobject iftCalcGrayImageHist;
%feature("autodoc", "2");
iftHist *iftCalcGrayImageHist(   iftImage *img,    iftImage *mask, long nbins, int max_val, bool normalize);

%newobject iftCalcGrayImageHistForLabels;
%feature("autodoc", "2");
iftHist **iftCalcGrayImageHistForLabels(   iftImage *img,    iftImage *label_img, int nbins, int max_val, bool normalize,
                                        int *n_hists_out);

%newobject iftCalcColorImageHist;
%feature("autodoc", "2");
iftHist *iftCalcColorImageHist(   iftImage *img,    iftImage *mask, int nbins, bool normalize);

%newobject iftCalcAccHist;
%feature("autodoc", "2");
iftHist *iftCalcAccHist(   iftHist *hist);

%newobject iftNormalizeHist;
%feature("autodoc", "2");
iftHist *iftNormalizeHist(   iftHist *src);

%newobject iftHistMode;
%feature("autodoc", "2");
int iftHistMode(   iftHist *hist, bool exclude_zero);

%newobject iftHistMean;
%feature("autodoc", "2");
double iftHistMean(   iftHist *hist, bool exclude_zero);

%newobject iftHistMedian;
%feature("autodoc", "2");
int iftHistMedian(   iftHist *hist, bool exclude_zero);

%newobject iftHistArgMin;
%feature("autodoc", "2");
int iftHistArgMin(   iftHist *hist, bool exclude_zero);

%newobject iftHistArgMax;
%feature("autodoc", "2");
int iftHistArgMax(   iftHist *hist, bool exclude_zero);

%newobject iftHistArgGreaterThan;
%feature("autodoc", "2");
int iftHistArgGreaterThan(   iftHist *hist, float thres, bool exclude_zero);

%newobject iftAddHists;
%feature("autodoc", "2");
iftHist *iftAddHists(   iftHist *hist1,    iftHist *hist2);

%newobject iftAddHistsInPlace;
%feature("autodoc", "2");
void iftAddHistsInPlace(   iftHist *src, iftHist *dst);

