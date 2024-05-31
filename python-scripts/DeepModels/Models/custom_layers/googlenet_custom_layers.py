from keras import backend as K

from keras.engine.topology import Layer, InputSpec
import tensorflow as tf
import numpy as np

class LRN(Layer):

  def __init__(self, n=5, alpha=0.0001, beta=0.75, k=1, **kwargs):

     self.n = n

     self.alpha = alpha

     self.beta = beta

     self.k = k

     super(LRN, self).__init__(**kwargs)

  def build(self, input_shape):

     self.shape = input_shape

     super(LRN, self).build(input_shape)

  def call(self, x, mask=None):

     if K.image_dim_ordering == "th":

        _, f, r, c = self.shape

     else:

        _, r, c, f = self.shape

     squared = K.square(x)

     pooled = K.pool2d(squared, (self.n, self.n), strides=(1, 1),

     padding="same", pool_mode="avg")

     if K.image_dim_ordering == "th":

        summed = K.sum(pooled, axis=1, keepdims=True)

        averaged = self.alpha * K.repeat_elements(summed, f, axis=1)

     else:

        summed = K.sum(pooled, axis=3, keepdims=True)

        averaged = self.alpha * K.repeat_elements(summed, f, axis=3)

     denom = K.pow(self.k + averaged, self.beta)

     return x / denom

  def get_output_shape_for(self, input_shape):

       return input_shape



class PoolHelper(Layer):
    
    def __init__(self, **kwargs):
        super(PoolHelper, self).__init__(**kwargs)
    
    def call(self, x, mask=None):
        return x[:,:,1:,1:]

    
    def get_config(self):
        config = {}
        base_config = super(PoolHelper, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))


