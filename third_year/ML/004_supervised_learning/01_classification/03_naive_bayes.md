# Naïve Bayes Classifier

## What is Naïve Bayes?

Naïve Bayes is a **supervised machine learning algorithm** mainly used for:

- Text classification
- Spam detection
- Sentiment analysis
- Document classification

It is based on **Bayes’ Theorem** and probability.

The algorithm is called **“naïve”** because it assumes that all features are independent of each other.

Example:
If an email contains words like **"win"**, **"free"**, and **"offer"**, the classifier may predict it as **spam**.

---

## Naïve Bayes Visualization

### Naïve Bayes Diagram

![Naive Bayes Diagram](https://miro.medium.com/v2/resize:fit:1400/1*39U1Ln3tSdFqsfQy6ndxOA.png)

Image Source:  
https://miro.medium.com/v2/resize:fit:1400/1*39U1Ln3tSdFqsfQy6ndxOA.png

---

## Bayes’ Theorem

Naïve Bayes uses Bayes' theorem to calculate probabilities.


::contentReference[oaicite:0]{index=0}


Where:

- **P(A|B)** → Probability of A given B
- **P(B|A)** → Probability of B given A
- **P(A)** → Prior probability
- **P(B)** → Evidence probability

---

## How Naïve Bayes Works

1. Train the model with labeled data
2. Calculate probabilities for each class
3. Use Bayes’ theorem
4. Predict the class with highest probability

Example:
- Email → “Free money now!”
- Prediction → Spam

---

## Types of Naïve Bayes

### 1. Gaussian Naïve Bayes
Used for continuous data.

### 2. Multinomial Naïve Bayes
Used for text classification and word counts.

### 3. Bernoulli Naïve Bayes
Used for binary/Boolean data (0 or 1).

---

## Advantages

- Simple and fast
- Works well with text data
- Good for high-dimensional datasets
- Easy to implement

---

## Disadvantages

- Assumes features are independent
- Can give poor results if assumptions are wrong
- Zero-frequency problem may occur

---

## Applications

- Spam filtering
- Sentiment analysis
- News/article classification
- Recommendation systems
- Medical diagnosis

---

## Python Example

```python
from sklearn.naive_bayes import MultinomialNB

model = MultinomialNB()

model.fit(X_train, y_train)

prediction = model.predict(X_test)
```

---

## Confusion Matrix Example

A confusion matrix helps evaluate prediction accuracy.

![Confusion Matrix](https://upload.wikimedia.org/wikipedia/commons/2/26/Confusion_matrix.png)

Image Source:  
https://upload.wikimedia.org/wikipedia/commons/2/26/Confusion_matrix.png

---

## Summary

Naïve Bayes is a fast and beginner-friendly machine learning algorithm based on probability. It is widely used in spam filtering, text classification, and sentiment analysis because of its simplicity and efficiency.