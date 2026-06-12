# Lasso Regression

Lasso Regression is a type of **Linear Regression** that helps prevent **overfitting** and can also remove unimportant features.

It adds a penalty to the model coefficients.

---

# Main Idea

Lasso Regression tries to:
- Reduce prediction error
- Keep the model simple

Some feature weights can become exactly **0**, meaning those features are removed from the model.

---

# Formula

## Linear Regression

\[
y = mx + b
\]

## Lasso Regression Cost Function

\[
Loss = RSS + \lambda \sum |w|
\]

Where:
- **RSS** = prediction error
- **\( \lambda \)** = regularization parameter
- **\( |w| \)** = absolute value of weights

---

# Simple Explanation

- Large weights are penalized
- Unimportant features may become **0**
- This helps in feature selection

---

# Easy Analogy

Imagine packing a bag with many items.

Lasso Regression removes unnecessary items to make the bag lighter and simpler.

---

# Pros

- Reduces overfitting
- Performs feature selection
- Creates simpler models

---

# Cons

- Can remove useful features if penalty is too high
- May underfit sometimes

---

# Ridge vs Lasso

| Feature | Ridge Regression | Lasso Regression |
|---|---|---|
| Penalty Type | Squared weights (\(w^2\)) | Absolute weights (\(|w|\)) |
| Removes Features? | No | Yes |
| Best For | Stability | Feature selection |

---

# Real-Life Uses

- Spam detection
- Stock prediction
- Medical diagnosis
- Marketing analysis

---

# Easy Memory Trick

> Lasso Regression = “Regression that removes unnecessary features”