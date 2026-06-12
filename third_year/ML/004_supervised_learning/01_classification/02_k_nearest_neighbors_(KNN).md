# K-Nearest Neighbors (KNN) Algorithm

## What is KNN?
K-Nearest Neighbors (KNN) is a simple **supervised machine learning algorithm** used for:

- **Classification** → predicting categories
- **Regression** → predicting continuous values

It works by finding the **nearest data points** to a new input and making predictions based on them.

---

## KNN Visualization

### KNN Classification Diagram

![KNN Diagram](https://substackcdn.com/image/fetch/$s_!8nCh!,f_auto,q_auto:good,fl_progressive:steep/https%3A%2F%2Fsubstack-post-media.s3.amazonaws.com%2Fpublic%2Fimages%2Fd0e3cbc0-4644-46bf-be9b-053431d6aa47_1920x1080.png)

Image Source:  
https://substackcdn.com/image/fetch/$s_!8nCh!,f_auto,q_auto:good,fl_progressive:steep/https%3A%2F%2Fsubstack-post-media.s3.amazonaws.com%2Fpublic%2Fimages%2Fd0e3cbc0-4644-46bf-be9b-053431d6aa47_1920x1080.png

---

## How KNN Works

1. Choose the number of neighbors (**K**)
2. Calculate distance between points
3. Find the **K nearest neighbors**
4. Predict:
   - **Classification:** majority vote
   - **Regression:** average value

---

## Distance Metrics

### 1. Euclidean Distance
Straight-line distance between two points.

:contentReference[oaicite:0]{index=0}

---

### 2. Manhattan Distance
Distance measured along grid paths.

:contentReference[oaicite:1]{index=1}

---

### 3. Hamming Distance
Used for comparing strings or binary values.

Example:
```text
1011101
1001001
```

Hamming Distance = 2

---

## Choosing K Value

- Small K → may overfit
- Large K → may underfit

Usually an **odd value** is chosen to avoid ties.

---

## Advantages

- Easy to understand
- Simple to implement
- Good for small datasets

---

## Disadvantages

- Slow for large datasets
- Uses more memory
- Struggles with high-dimensional data

---

## Applications of KNN

- Recommendation systems
- Healthcare prediction
- Finance analysis
- Image recognition
- Text classification

---

## Python Example

```python
from sklearn.neighbors import KNeighborsClassifier

model = KNeighborsClassifier(n_neighbors=5)

model.fit(X_train, y_train)

prediction = model.predict(X_test)
```

---

## Summary

KNN is a beginner-friendly machine learning algorithm that predicts outcomes using the nearest data points. It is simple and accurate for smaller datasets but becomes slower with larger datasets.