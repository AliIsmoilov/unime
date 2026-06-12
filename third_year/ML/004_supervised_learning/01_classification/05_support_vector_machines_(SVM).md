# Support Vector Machines (SVM)

## What is SVM?

Support Vector Machine (SVM) is a **supervised machine learning algorithm** used for:

- Classification (most common)
- Regression (called SVR)

It works by finding a **best boundary (hyperplane)** that separates different classes with the **maximum margin**.

---

## SVM Visualization

### SVM Hyperplane Diagram

![SVM Diagram](https://upload.wikimedia.org/wikipedia/commons/7/72/SVM_margin.png)

Image Source:  
https://upload.wikimedia.org/wikipedia/commons/7/72/SVM_margin.png

---

## How SVM Works

1. Plot data points in space (2D, 3D, or higher dimensions)
2. Find a line/plane (hyperplane) that separates classes
3. Choose the hyperplane with **maximum margin**
4. The closest points to the boundary are called **support vectors**
5. Use this boundary to classify new data

---

## Key Idea: Maximum Margin

SVM chooses the boundary that leaves the **largest gap between classes**, making it more accurate and stable.

---

## What are Support Vectors?

Support vectors are:
- The closest data points to the decision boundary
- The most important points that define the hyperplane

If you remove them → the boundary changes.

---

## Types of SVM

### 1. Linear SVM
- Used when data is linearly separable
- Straight line (2D) or plane (3D)

---

### 2. Non-Linear SVM
- Used when data cannot be separated with a straight line
- Uses **kernel trick**

Common kernels:
- Linear kernel
- Polynomial kernel
- RBF (Radial Basis Function)
- Sigmoid kernel

---

## Kernel Trick (Simple Idea)

Instead of drawing a complex curve in low dimensions, SVM:
- Converts data into higher dimensions
- Makes it linearly separable there

---

## SVM for Regression (SVR)

SVM can also predict continuous values using **Support Vector Regression (SVR)**.

Example:
- Predicting house prices
- Predicting stock values

---

## Advantages

- Works well in high-dimensional data
- Effective for text and image classification
- Strong performance with clear margins
- Less prone to overfitting (in many cases)

---

## Disadvantages

- Slow on large datasets
- Hard to tune (kernel, C, gamma)
- Not very interpretable
- Memory intensive

---

## Applications

- Spam detection
- Sentiment analysis
- Image classification
- Face detection
- Medical diagnosis

---

## Python Example

```python
from sklearn.svm import SVC

model = SVC(kernel='linear')

model.fit(X_train, y_train)

prediction = model.predict(X_test)
```

---

## Summary

SVM is a powerful machine learning algorithm that finds the best boundary between classes using maximum margin. It works very well for complex and high-dimensional data, especially in text and image tasks.