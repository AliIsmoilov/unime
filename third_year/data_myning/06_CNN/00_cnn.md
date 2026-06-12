# Convolutional Neural Networks (CNN)

# What is CNN?


Convolutional Neural Networks (CNNs) are speacial types of Neural Networks mainly designed for:
- image processing
- computer vision
- video analysis

CNNs are widely used for:
- image recognition
- object detection
- face recognition
- medical image analysis

State of the art performance on many problems

---

# Main idea of CNN

A normal Neural Network:
- processes all image pixels at once
- requires many parametrs

CNN:
- processes small parts of an image
- automatically learns important features

Example:
- edges
- corners
- textures
- shapes
- objects

CNN learns these fatures step-by-step
---

# Main layers of CNN

CNN usually contains:

1. Convolutional Layer
2. Activation Function
3. Pooling Layer
4. Fully Connected Layer

---

# 1. Convolutional Layer

This is most important part of CNN.

The convolutional layer:
- applies filters to the image
- extacts features

Examples:
- edge detection
- texture detection
- pattern recognition

---

# What is filter?

A filter is:
- a small matrix

It slides over the image and:
- multiplies pixel values
- sums them
- creates an activation map

---

# Stride

Stride means:
- how many pixels filter moves each step

# Padding

When filters reach image edges:
- information can be lost

Padding solves this by:
- adding extra pixels around the image

Most common:
- zero padding

Padding helps:
- preserve output size

---

# 2. Activation Function

After convolution:
- an activation function is applied
- this decides which information should continue forward
- introduces non-linearity into the network.

Most common activation:

# ReLU

Formula:

```math
ReLU(x)=max(0,x)
```

Advantages:
- fast
- reduces vanishing gradient problem

---

# 3. Pooling Layer

Pooling:
- reduces image size

This helps:
- reduce computation
- reduce memory usage
- keep important features

---

# Max Pooling

Max Pooling:
- selects the largest value in region

Example:
- from a 2x2 region, the maximum value is choosen

--- 

# Advantages of Pooling

* Faster computation
* Less memory usage
* More robus to noise


# 4.Fully Connected (Dense) Layer

At the end of CNN:
- Fully Connected layers are used

These layers:
- combine all learned features
- perform final classification

Example output:
- cat
- dog
- car

---

# Evolution of CNN Architectures

# LeNet

One of the earliest CNN models.

Used for:
- handwritten digit recognition

---

# AlexNet (2012)

Major breakthrough in Deep Learning.

Features:
- used GPUs
- introduced Dropout
- achieved very high accuracy

---

# VGGNet

Simple architecture using:
- only 3×3 convolutions
- 2×2 max pooling

---

# GoogLeNet

Introduced:
- Inception modules

Used for:
- more advanced feature extraction

---

# ResNet

ResNet introduced:
- skip connections

Benefits:
- easier gradient flow
- reduces vanishing gradient problem

Allows:
- very deep networks (1000+ layers)

---


# Transfer Learning

Training CNNs requires:
- huge datasets
- high computation power

Solution:
- use a pre-trained model
- retrain only the final layers

This is called:
- Transfer Learning

---

# Data preprocessing

Before training:
- data is normalized

Common methods:
- subtract mean
- divide by standard deviation

Benefits:
- faster convergence
- more stable training

---

# Hyperparameter Tuning

Hyperparameter Optimization means choosing the best settings for a model.

Important hyperparameters:
- learning rate
- number of layers
- regularization strength
- batch size

Correct tuning is:
- very important for performance

---

# Autoencoders

Autoencoders are:
- unsupervised neural networks

They:
- compress data
- reconstruct data

Used for:
- feature extraction
- image generation
- dimensionality reduction

---


# ✅ Advantages of CNNs 

* Very powerful for image recognition
* Automatic feature learning
* High accuracy

# ❌ Disadvantages of CNNs

* High computation cost
* Requires large datasets
* Training can be slow


# Overall Summary

CNNs are Deep Learning models designed for image-related tasks.

They use:
- convolution
- activation functions
- pooling
- fully connected layers

They use:
- convolution
- activation functions
- pooling
- fully connected layers

to learn features automatically.

CNNs learn images hierarchically:

```text
Edges → Shapes → Objects
```

They are widely used in:
- computer vision
- facial recognition
- medical imaging
- autonomous vehicles


# Final answer:

CNN is specialized N.N designed mainly for structured grid data such as images.
Images have spatial structure: nearly pixels are related.
CNNs preserver this slatial structure.

CNN usually contains 4 layers: 
    - Convolutional Layer
    - Activation Function
    - Pooling Layer
    - Fully Connected Layer


1. Convolution layer use filters to detect local patterns sucha as edges, textures and shapes.


2. After convolution:
- an activation function is applied
- this decides which information should continue forward
- introduces non-linearity into the network.

3. Pooling:
- reduces image size

This helps:
- reduce computation
- reduce memory usage
- keep important features

4. Fully Connected (Dense) Layer

In this layer combines all learned features and perform final classification 
---