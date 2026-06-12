# K-Means Clustering

## What is K-Means Clustering?
K-Means Clustering is an **unsupervised machine learning algorithm** used to group similar data points into clusters.

It works with **unlabeled data**, meaning the machine finds patterns on its own.

---

# Simple Idea
Imagine you have mixed customers in a store.

K-Means automatically groups customers based on similarities like:
- age
- spending habits
- interests

Each group is called a **cluster**.

---

# Why is it Called “K-Means”?

- **K** = number of clusters
- **Means** = average center point (centroid) of a cluster

Example:
If `K = 3`, the algorithm creates 3 clusters.

---

# How K-Means Works

## Step 1: Choose K
Select the number of clusters.

Example:

```python
K = 3
```

---

## Step 2: Initialize Centroids
Randomly place cluster centers (centroids).

Example:

```text
Cluster 1 Center → (2,3)
Cluster 2 Center → (6,7)
Cluster 3 Center → (9,1)
```

---

## Step 3: Assign Data Points
Each data point goes to the nearest centroid.

The algorithm calculates the distance between:
- data points
- cluster centers

and assigns the point to the closest cluster.

---

## Step 4: Update Centroids
The algorithm recalculates the centroid by taking the average of all points inside the cluster.

---

## Step 5: Repeat
Repeat:
- assigning points
- updating centroids

until the clusters stop changing.

This is called **convergence**.

---

# Visual Representation

```text
Cluster 1 → ● ● ●
Cluster 2 → ▲ ▲ ▲
Cluster 3 → ■ ■ ■
```

Each symbol represents a different cluster.

---

# Important Terms

## Centroid
The center point of a cluster.

---

## Euclidean Distance
The distance between data points and centroids.

The algorithm uses the shortest distance to assign clusters.

---

## Inertia
Measures how close data points are within a cluster.

- Lower inertia = better clustering

---

# Choosing the Best K

## Elbow Method
A popular technique to find the optimal number of clusters.

The graph looks like an elbow, and the bend point suggests the best K value.

---

# K-Means++
An improved version of K-Means.

It selects better initial centroids to improve:
- speed
- accuracy
- cluster quality

---

# Real-World Applications

## Customer Segmentation
Grouping customers based on buying behavior.

---

## Recommendation Systems
Used by:
- Netflix
- Amazon
- Spotify

---

## Image Segmentation
Separates objects or regions in images.

---

## Document Classification
Groups similar articles or documents together.

---

# Advantages
- Simple and easy to understand
- Fast and efficient
- Works well on large datasets
- Scalable

---

# Disadvantages
- Need to choose K manually
- Sensitive to outliers
- Performs poorly with irregular-shaped clusters
- Results depend on initial centroids

---

# K-Means vs Hierarchical Clustering

| Feature | K-Means | Hierarchical |
|---|---|---|
| Speed | Fast | Slower |
| Need K beforehand? | Yes | No |
| Structure | Flat clusters | Tree structure |

---

# Simple Real-Life Analogy
Imagine students entering a classroom.

K-Means automatically groups them based on:
- similar interests
- marks
- hobbies

without any labels or teacher instructions.

That is how K-Means clustering works.

---