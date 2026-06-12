# Gradient Descent Methods in Machine Learning

These methods are used to train machine learning models by reducing prediction error (loss).

The main idea is:

> Model makes mistakes → updates parameters → improves predictions

---

# 1. Gradient Descent (Batch Gradient Descent)

Gradient Descent uses the **entire dataset** to calculate error and update parameters.

## Steps
1. Use all training data
2. Calculate total error
3. Update weights once

## Pros
- Stable learning
- Accurate updates

## Cons
- Slow for large datasets

## Simple Analogy
Like checking **every exam paper** before improving teaching.

---

# 2. Stochastic Gradient Descent (SGD)

SGD uses **one training example at a time**.

## Steps
1. Pick one data point
2. Calculate error
3. Update immediately

## Pros
- Very fast
- Good for large datasets

## Cons
- Noisy and less stable

## Simple Analogy
Like improving after checking **one paper at a time**.

---

# 3. Mini-Batch Gradient Descent

Mini-Batch Gradient Descent uses a **small batch of data points** at a time.

Example batch sizes:
- 16
- 32
- 64

## Pros
- Faster than full Gradient Descent
- More stable than SGD
- Commonly used in deep learning

## Cons
- Requires choosing batch size

## Simple Analogy
Like checking **a small stack of papers** before improving.

---

# Comparison Table

| Method | Data Used | Speed | Stability |
|---|---|---|---|
| Gradient Descent | Full dataset | Slow | Very stable |
| SGD | One example | Fast | Noisy |
| Mini-Batch GD | Small batch | Balanced | Balanced |

---

# Easy Memory Trick

- **Gradient Descent** → “Use all data”
- **SGD** → “Use one”
- **Mini-Batch GD** → “Use some”