# CFU Playground

Want a faster ML processor?   Do it yourself!

This project provides a framework that an engineer, intern, or student can use to design and evaluate **enhancements** to an FPGA-based “soft” processor, specifically to increase the performance of machine learning (ML) tasks.   The goal is to abstract away most infrastructure details so that the user can get up to speed quickly and focus solely on adding new processor instructions, exploiting them in the computation, and measuring the results.

## Custom Models added

We have added two custom models to the CFU interface. One model is trained on mnist and other model is trained on svhn. The colab links of the tensorflow codes for these models is given below. The tflite files and the test images are in the following directory: 
### 
      SVHN: CFU-Playground_for_MNIST_SVHN/common/src/models/svhn
      MNIST: CFU-Playground_for_MNIST_SVHN/common/src/models/mnist

The colab links for these models:\
[MNIST Colab Link](https://colab.research.google.com/drive/1ovj-CpMuyoi6m-YwtIhMoNlD3bcFiFBS#scrollTo=OHMCM26e2JWO)\
[SVHN Colab Link](https://colab.research.google.com/drive/1vgYmTibGcwm5q-qXC-bBHECLKY8woinw#scrollTo=pH9_IWJgNxDe)

## Convolution and CFU Code Files
  The Code Files Directory in the basefolder has all the convolution codes and CFU codes of the optimizations and accelerator implementations done. For details of the versions, please go through the readme file in the code files directory.
     
## Project Folders
  The project folders of MNIST and SVHN are in the proj directory. The project directories are given below:
###
      SVHN: CFU-Playground_for_MNIST_SVHN/proj/svhn_model
      MNIST: CFU-Playground_for_MNIST_SVHN/proj/mnist
  To use the different versions of convolution and CFU codes, we have to change the code files mentioned below with the corresponding version of the code. The conv.h file must be updated with the conv_ver_a_b_c_d.h file. Similarly, the cfu.v file must be updated with the cfu_ver_a_b_c_d.v file where a.b.c.d is the version of code we want to test.
###
      CFU-Playground_for_MNIST_SVHN/proj/proj_directory/src/tensorflow/lite/kernels/internal/reference/integer_ops/conv.h
      CFU-Playground_for_MNIST_SVHN/proj/proj_directory/cfu.v
  For the versions 2.5.1.2 and 2.5.4.2, we have to do some to the svhn.cc file in the CFU-Playground_for_MNIST_SVHN/common/src/models/svhn directory. The details of changes are given in the readme file in that directory.
      



