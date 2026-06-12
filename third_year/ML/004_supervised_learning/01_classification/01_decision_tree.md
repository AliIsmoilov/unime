# Decision Tree

A decision tree is a supervised machine learning algorithm used for:
- Classification
- Regression

It works like a flowchart by making decisions step by step.

---

# Simple Definition

> A decision tree splits data into smaller groups based on conditions to make predictions.

---

# Example Decision Tree

Suppose we want to decide:

## "Should I go surfing?"

The model asks questions like:
- Is the weather sunny?
- Is it windy?
- Are waves good?

Based on answers, it gives a final decision:
- Yes
- No

---

# Decision Tree Structure

A decision tree contains:

| Part | Meaning |
|---|---|
| Root Node | Starting point |
| Decision Node | Question or condition |
| Branch | Result of decision |
| Leaf Node | Final prediction/output |

---

# Example Diagram

![Decision Tree Example](https://assets.ibm.com/is/image/ibm/ICLH_Diagram_Batch_03_24A-AI-ML-DecisionTree:16x9?fmt=png-alpha&dpr=on%2C1.5&wid=960&hei=540)

---

# How Decision Trees Work

## Step 1: Start with All Data
The full dataset is placed at the root node.

---

## Step 2: Find Best Split
The algorithm selects the best feature to split the data.

Example:
- Age
- Salary
- Weather

---

## Step 3: Create Branches
Data is divided into smaller groups.

---

## Step 4: Repeat Process
The tree continues splitting until:
- Data becomes pure
- Or stopping condition is reached

---

# Types of Decision Trees

## 1. Classification Tree
Used for predicting categories.

### Example
- Spam / Not Spam
- Yes / No

---

## 2. Regression Tree
Used for predicting numerical values.

### Example
- House price
- Temperature

---

# Important Concepts

## Entropy

Entropy measures randomness or impurity in data.

### Simple Idea
- Low entropy → clean data
- High entropy → mixed data

---

## Information Gain

Information gain measures how good a split is.

### Simple Idea
> Higher information gain = Better split

The algorithm chooses the feature with the highest information gain.

---

## Gini Impurity

Gini impurity measures how often data is incorrectly classified.

### Simple Idea
- Lower Gini impurity = Better split

---

# Common Decision Tree Algorithms

| Algorithm | Description |
|---|---|
| ID3 | Uses information gain |
| C4.5 | Improved version of ID3 |
| CART | Uses Gini impurity |

---

# Advantages

- Easy to understand
- Easy to visualize
- Works with both numbers and categories
- Requires little data preprocessing

---

# Disadvantages

- Can overfit easily
- Sensitive to small data changes
- Large trees become complex

---

# Overfitting in Decision Trees

Sometimes the tree becomes too large and memorizes training data.

This causes:
- Poor performance on new data

Solution:
- Pruning
- Random Forest

---

# Random Forest

Random Forest combines multiple decision trees.

Benefits:
- Better accuracy
- Reduced overfitting
- More stable predictions

---

# Real-Life Applications

## Medical Diagnosis
Predicts disease based on symptoms.

---

## Loan Approval
Approves or rejects loan applications.

---

## Spam Detection
Classifies emails as spam or not spam.

---

## Customer Churn Prediction
Predicts whether customers will leave a service.

---

# Summary

Decision trees:
- Make predictions using step-by-step decisions
- Split data into smaller groups
- Are simple and easy to understand

Main uses:
1. Classification
2. Regression