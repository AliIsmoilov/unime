# Supervised Learning

Supervised learning is a type of machine learning where a model learns using **labeled data**.

Labeled data means:
- Input data already has the correct answer attached.

The model learns patterns from this data and then predicts outputs for new data.

---

# Simple Definition

> Supervised learning = Learning from examples with correct answers.

---

# Example

Suppose we want to identify animals.

| Image | Label |
|---|---|
| Cat image | Cat |
| Dog image | Dog |

The model learns:
- What a cat looks like
- What a dog looks like

Later, when a new image is given, the model predicts the correct label.

---

# How Supervised Learning Works

## Step 1: Collect Labeled Data
Data contains:
- Inputs
- Correct outputs

Example:

| Hours Studied | Exam Score |
|---|---|
| 2 | 40 |
| 5 | 80 |

---

## Step 2: Train the Model
The algorithm learns relationships between:
- Inputs
- Outputs

---

## Step 3: Test the Model
New unseen data is given to check prediction accuracy.

---

# Ground Truth Data

Ground truth data means:
- Correct and verified answers

Example:
- Spam email → "Spam"
- Normal email → "Not Spam"

This helps the model learn correctly.

---

# Types of Supervised Learning

## 1. Classification

Used when output is a category or label.

### Examples
- Spam detection
- Disease prediction
- Image recognition

### Output Example
- Yes / No
- Cat / Dog
- Spam / Not Spam

---

## 2. Regression

Used when output is a continuous number.

### Examples
- House price prediction
- Stock price prediction
- Sales forecasting

### Output Example
- \$5000
- 75.4
- 120000

---

# Common Supervised Learning Algorithms

| Algorithm | Purpose |
|---|---|
| Linear Regression | Predict continuous values |
| Logistic Regression | Binary classification |
| Decision Tree | Classification & regression |
| Random Forest | Improved decision trees |
| KNN | Finds nearest similar data |
| SVM | Separates data classes |
| Naive Bayes | Probability-based classification |

---

# Real-Life Examples

## Email Spam Detection
- Input → Email text
- Output → Spam or Not Spam

---

## House Price Prediction
- Input → House size, rooms, location
- Output → Predicted price

---

## Image Recognition
- Input → Image
- Output → Object label

---

# Advantages

- High accuracy with good data
- Easy to measure performance
- Useful for prediction tasks

---

# Disadvantages

- Requires labeled data
- Labeling data can be expensive
- Performance depends on data quality

---

# Summary

Supervised learning:
- Learns from labeled data
- Finds relationships between inputs and outputs
- Predicts results for new data

Main types:
1. Classification
2. Regression