# Classification Models

A classification model is a machine learning model that sorts data into predefined categories called classes.

It learns from labeled data and predicts the correct category for new data.

---

# Simple Definition

> Classification models predict categories or labels.

---

# Example

## Email Spam Detection

| Email | Output |
|---|---|
| "Win money now!" | Spam |
| "Meeting at 5 PM" | Not Spam |

The model learns patterns from examples and predicts the correct category.

---

# How Classification Models Work

## Step 1: Training (Learning)

The model learns from labeled data.

Example:

| Input | Label |
|---|---|
| Cat image | Cat |
| Dog image | Dog |

The model studies features and patterns in the data.

---

## Step 2: Prediction (Classification)

New unseen data is given to the model.

The model predicts the correct class.

Example:
- New image → "Dog"

---

# Types of Classification

## 1. Binary Classification

Predicts between two categories.

### Examples
- Spam / Not Spam
- Yes / No
- True / False

---

## 2. Multiclass Classification

Predicts one category from many classes.

### Examples
- Cat / Dog / Bird
- Car / Bike / Truck

---

## 3. Multilabel Classification

One data point can belong to multiple classes.

### Example
A movie can be:
- Action
- Comedy
- Drama

at the same time.

---

## 4. Imbalanced Classification

Some classes have much more data than others.

### Example
- 95% normal transactions
- 5% fraud transactions

Common in fraud detection and medical diagnosis.

---

# Classification vs Regression

| Classification | Regression |
|---|---|
| Predicts categories | Predicts numbers |
| Spam or Not Spam | House price |
| Cat or Dog | Temperature prediction |

---

# Common Classification Algorithms

| Algorithm | Use |
|---|---|
| Logistic Regression | Binary classification |
| Decision Tree | Easy rule-based classification |
| Random Forest | Multiple decision trees |
| SVM | Separates classes using boundaries |
| KNN | Finds nearest similar data |
| Naive Bayes | Probability-based classification |

---

# Real-Life Applications

## Spam Detection
Classifies emails as:
- Spam
- Not Spam

---

## Image Recognition
Identifies:
- Cats
- Dogs
- Cars
- Faces

---

## Medical Diagnosis
Predicts:
- Disease
- No disease

---

## Fraud Detection
Detects:
- Fraudulent transactions
- Safe transactions

---

# Advantages

- Easy to understand
- Works well for prediction tasks
- Useful in many industries

---

# Disadvantages

- Needs labeled data
- Can overfit with bad training
- Accuracy depends on data quality

---

# Summary

Classification models:
- Learn from labeled data
- Predict categories or labels
- Are widely used in AI and machine learning

Main types:
1. Binary Classification
2. Multiclass Classification
3. Multilabel Classification
4. Imbalanced Classification