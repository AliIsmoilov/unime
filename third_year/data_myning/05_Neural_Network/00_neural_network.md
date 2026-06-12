# Neural Networks — Short Notes

# 1. What is a Neural Network?

A Neural Network (NN) is a machine learning model inspired by the human brain.

It is used for:
- image recognition
- speech recognition
- prediction
- classification
- chatbots
- recommendation systems

Neural Networks learn patterns directly from data.

---

# 2. Structure of a Neural Network

A Neural Network is made of connected neurons organized into layers.

Main layers:

1. Input Layer
   - receives data

2. Hidden Layer(s)
   - processes information

3. Output Layer
   - produces final result

---

# 3. Artificial Neuron

An artificial neuron:
- receives inputs
- multiplies them by weights
- adds bias
- applies activation function

Simple idea:
> neurons strengthen important information and reduce unimportant information.

---

# 4. Activation Functions

Activation functions add non-linearity to the network.

They help Neural Networks learn complex patterns.

---

# Common Activation Functions

## Sigmoid

Range:
- 0 to 1

Used in older networks.

Problem:
- can cause vanishing gradients.

---

## ReLU (Rectified Linear Unit)

Most common activation function.

Formula:

```math
ReLU(x)=max(0,x)
```

Advantages:
- fast
- speeds up training

Problem:
- neurons can "die" and stop learning.

---

## Leaky ReLU

Improved version of ReLU.

Allows small negative values.

Helps prevent:
- dying ReLU problem.

---

# 5. Deep Learning

If a Neural Network has many hidden layers,
it is called:

- Deep Learning

Deep Learning can learn:
- very complex patterns
- high-level features

---

# 6. Feature Learning

Traditional methods:
- required manually designed features.

Neural Networks:
- learn features automatically from raw data.

Example:
- edges
- shapes
- objects

are learned step-by-step.

---

# 7. Loss Function

Loss function measures:
- how wrong the prediction is.

Large loss:
- large error

Small loss:
- better model

Goal of training:
- minimize loss.

---

# 8. Backpropagation

Backpropagation:
- sends error backward through the network
- calculates which weights caused the error

It is the main training algorithm in Neural Networks.

---

# 9. Gradient Descent

Gradient Descent:
- updates weights
- reduces error step-by-step

Simple idea:
> the model slowly moves toward the correct answer.

---

# 10. Momentum

Momentum:
- speeds up learning
- reduces oscillation during training

Helps the network:
- converge faster.

---

# 11. Regularization

Regularization prevents:
- overfitting

Overfitting means:
- model memorizes training data
- performs poorly on new data

Regularization keeps weights smaller and more stable.

---

# 12. L1 Regularization

L1 uses:
- absolute values of weights

Formula:

```math
Loss = OriginalLoss + \lambda \sum |w|
```

Effects:
- pushes some weights to zero
- performs feature selection
- creates sparse models

---

# 13. L2 Regularization

L2 uses:
- squared values of weights

Formula:

```math
Loss = OriginalLoss + \frac{1}{2}\sum w_i^2
```

Effects:
- reduces large weights
- improves stability
- helps prevent exploding gradients

---

# 14. Weight Update in L2

Formula:

```math
w_{t+1}=w_t-\epsilon \frac{\partial E}{\partial w}-\lambda w
```

Meaning:
- weights are continuously adjusted
- large weights are penalized

---

# 15. L1 vs L2 Regularization

| Feature | L1 | L2 |
|---|---|---|
| Penalty | \(|w|\) | \(w^2\) |
| Effect on weights | Some become 0 | Become smaller |
| Feature selection | Yes | No |
| Stability | Lower | Higher |
| Exploding gradient help | Limited | Strong |

---

# 16. Problems in Neural Networks

## Black Box Problem

It is difficult to understand:
- what hidden layers are doing.

---

## Overfitting

Model:
- works perfectly on training data
- fails on unseen data.

---

## Vanishing Gradient

Gradient becomes:
- too small

Result:
- learning slows or stops.

---

## Exploding Gradient

Gradient becomes:
- too large

Result:
- unstable training.

---

# 17. Overall Summary

Neural Networks:
- are inspired by the human brain
- learn patterns from data
- use neurons, weights, and activation functions
- improve through backpropagation and gradient descent

Important concepts:
- Deep Learning
- ReLU
- Backpropagation
- Regularization
- L1 and L2

Neural Networks are powerful tools for:
- AI
- computer vision
- natural language processing
- prediction systems

---

# Final answer


## Neural Networks

N.N is ML model inspired by human brain. It consists of units called neurons organized in layers. 
Usually N.N has organized in layers. Usually, N.N has an input layer, one or more hidden layers, and an output layer. 
Each neuron recieves inputs, multiplies them by weights, adds a bias, and applies an activation function to produce an output. 


## Activation function

Activation function allows network to learn and model complex relationships between inputs and outputs
by introducing non-linearities.

Activation function types:
   - Sigmoid - real-valued output between 0 and 1
   - Tanh - real-valued output between -1 and 1
   - ReLU - rectified linear unit. f(z) = max(0,z) 
   - Leaky ReLU - allows small non-zero output for negative input. f(z) = max(0.01z,z)



```