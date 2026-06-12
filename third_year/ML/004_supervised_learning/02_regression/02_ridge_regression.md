# Ridge Regression

Ridge Regression is a type of **Linear Regression** that helps prevent **overfitting**.

It adds a small penalty to large model weights (coefficients).

---

# Main Idea

Normal Linear Regression tries to fit data as closely as possible.

Sometimes the model becomes too complex and performs poorly on new data.

Ridge Regression solves this by keeping coefficient values smaller.

---

# Formula

## Linear Regression

\[
y = mx + b
\]

## Ridge Regression Cost Function

\[
Loss = RSS + \lambda \sum w^2
\]

Where:
- **RSS** = prediction error
- **\( \lambda \)** = regularization parameter
- **\( w^2 \)** = squared weights

---

# Simple Explanation

- Large weights → model becomes too sensitive
- Ridge Regression reduces large weights
- This improves generalization on new data

---

# Easy Analogy

Imagine fitting a flexible wire through points.

- Linear Regression bends the wire freely
- Ridge Regression keeps the wire smoother and less extreme

---

# Pros

- Reduces overfitting
- Works well with many features
- Improves model stability

---

# Cons

- Adds slight bias
- Does not completely remove unimportant features

---

# Real-Life Uses

- House price prediction
- Sales forecasting
- Stock market prediction
- Medical data analysis

---

# Easy Memory Trick

> Ridge Regression = “Linear Regression with penalty”