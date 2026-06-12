# Backpropogation

Backpropogatioin is the main alogrithm used to train multi-layer neural networks.
It calculates how much each weight contributed to the final error and updates the weights to reduce error.

The process has several steps:
    1. During forward pass, input data moves through network and produces a prediction.
    2. Loss function compares prediction with true label.
    3. During backwrd pas, error is propogated backward from output layer to earlier layers.
    5. Finally, weights are updated using G.D

Backpropogation is necessary because N.N can have millions of parameters.
Calculating gradients manually would be too slow. Backpropogation computes gradients efficiently for all layers.

