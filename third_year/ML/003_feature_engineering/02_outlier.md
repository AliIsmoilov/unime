# Outliers Management

## What Are Outliers?

Outliers are data points that are very different from most other values in a dataset.

### Example

Dataset:

```text
10, 12, 13, 15, 14, 11, 120
```

The value **120** is an outlier because it is much larger than the other values.

### Types of Outliers

#### 1. Global Outliers

Values that are unusual compared to the entire dataset.

Example:

```text
1, 2, 3, 4, 100
```

Here, **100** is a global outlier.

---

#### 2. Contextual Outliers

Values that are unusual only in a specific context.

Example:

* Temperature = 25°C in summer → Normal
* Temperature = 25°C in winter → Unusual

The same value may or may not be an outlier depending on the context.

---

### Causes of Outliers

* Data entry mistakes
* Measurement errors
* Sensor failures
* Rare but real events
* Fraudulent activities

Example:

Age = 250 years

Likely caused by a data entry error.

---

# Impact of Outliers

Outliers can strongly affect data analysis and machine learning models.

### Problems Caused by Outliers

#### 1. Distort the Mean

Dataset:

```text
10, 12, 13, 15, 100
```

Mean:

```text
(10 + 12 + 13 + 15 + 100) / 5
= 30
```

The mean becomes much larger than most values.

---

#### 2. Increase Variance and Standard Deviation

Extreme values make the data appear more spread out.

---

#### 3. Reduce Model Accuracy

Some algorithms are sensitive to outliers:

* Linear Regression
* K-Means Clustering
* KNN

Outliers can pull predictions away from normal data.

---

#### 4. May Contain Important Information

Outliers are not always bad.

Examples:

* Credit card fraud
* Network attacks
* Machine failures
* Medical abnormalities

Sometimes the outlier is exactly what we want to detect.

---

# Z-Score Method

## What is a Z-Score?

A Z-score tells us how many standard deviations a value is from the mean.

### Formula

Z = (x - Mean) / Standard Deviation

Where:

* x = data point
* Mean = average value
* Standard Deviation = spread of data

---

### Example

Mean = 50

SD = 5

Value = 65

Z = (65 - 50) / 5

Z = 15 / 5

Z = 3

Interpretation:

The value 65 is 3 standard deviations above the mean.

---

### Rule of Thumb

If:

```text
|Z| > 3
```

The point is often considered an outlier.

Examples:

| Z-score | Outlier?   |
| ------- | ---------- |
| 1.5     | No         |
| 2.5     | Usually No |
| 3.2     | Yes        |
| -4.0    | Yes        |

---

# Interquartile Range (IQR)

## What is IQR?

IQR measures the spread of the middle 50% of data.

### Formula

IQR = Q3 - Q1

Where:

* Q1 = 25th percentile
* Q3 = 75th percentile

---

## Understanding Quartiles

Sorted data:

```text
2, 4, 6, 8, 10, 12, 14, 16
```

### Q1

25% point

```text
Q1 = 5
```

### Q2

Median

```text
Q2 = 9
```

### Q3

75% point

```text
Q3 = 13
```

---

### Calculate IQR

IQR = Q3 - Q1

IQR = 13 - 5

IQR = 8

---

## Detecting Outliers with IQR

### Lower Bound

Lower Bound = Q1 - 1.5 × IQR

### Upper Bound

Upper Bound = Q3 + 1.5 × IQR

Any value outside these bounds is considered an outlier.

---

### Example

Q1 = 20

Q3 = 40

IQR = 20

Lower Bound:

```text
20 - (1.5 × 20)
= -10
```

Upper Bound:

```text
40 + (1.5 × 20)
= 70
```

Any value:

```text
< -10 or > 70
```

is an outlier.

---

## Why Use IQR?

Advantages:

* Simple
* Easy to calculate
* Not affected by extreme values
* Works well with skewed data

---

# Proximity and Density-Based Outlier Detection

These methods compare points to their neighbors.

---

## K-Nearest Neighbor (KNN) Distance

Idea:

A point is an outlier if it is far from its nearest neighbors.

Example:

Most points are clustered together.

One point is isolated far away.

That isolated point is likely an outlier.

---

## Local Outlier Factor (LOF)

Idea:

Compare a point's density with the density of nearby points.

If a point has much lower density than its neighbors, it is considered an outlier.

### Example

Normal region:

```text
● ● ● ● ●
```

Sparse point:

```text
                ●
```

The isolated point has low local density.

---

## Mahalanobis Distance

Measures distance while considering correlations between features.

### Formula

DM = sqrt((x - Mean)^T × Covariance^-1 × (x - Mean))

You do not usually calculate this by hand in exams.

### Important Idea

Unlike Euclidean distance, it considers relationships between variables.

Useful for:

* Multivariate outlier detection
* High-dimensional datasets

---

## DBSCAN

Density-based clustering algorithm.

### Idea

Points are grouped into dense clusters.

Points that do not belong to any cluster are treated as outliers.

Example:

Cluster:

```text
● ● ● ● ●
```

Noise:

```text
            ●
```

The isolated point is an outlier.

---

# How to Manage Outliers

## 1. Remove Outliers

Use when:

* Data entry error
* Measurement error

Example:

Age = 300 years

Remove it.

---

## 2. Transform Data

Apply transformations to reduce the effect of extreme values.

Common transformation:

```text
Log Transformation
```

Example:

Before:

```text
10, 20, 50, 1000
```

After log transform:

```text
1.0, 1.3, 1.7, 3.0
```

The extreme value becomes less dominant.

---

## 3. Winsorization

Replace extreme values with a maximum acceptable value.

Example:

Original:

```text
10, 12, 13, 15, 200
```

After Winsorization:

```text
10, 12, 13, 15, 50
```

---

## 4. Use Robust Models

Some models handle outliers better.

Examples:

* Huber Regression
* Median-based statistics
* Random Forest
* Gradient Boosting

---

## 5. Analyze Separately

If outliers represent important events:

* Fraud detection
* Medical diagnosis
* Equipment failures

Study them instead of removing them.

---

# Quick Exam Summary

### Z-Score

Formula:

```text
Z = (x - Mean) / SD
```

Outlier if:

```text
|Z| > 3
```

---

### IQR

Formula:

```text
IQR = Q3 - Q1
```

Bounds:

```text
Lower = Q1 - 1.5 × IQR
Upper = Q3 + 1.5 × IQR
```

Values outside the bounds are outliers.

---

### Detection Methods

| Method               | Idea                    |
| -------------------- | ----------------------- |
| Z-Score              | Distance from mean      |
| IQR                  | Uses quartiles          |
| KNN Distance         | Far from neighbors      |
| LOF                  | Low local density       |
| Mahalanobis Distance | Multivariate distance   |
| DBSCAN               | Points outside clusters |

---

### Management Methods

| Method             | Purpose                    |
| ------------------ | -------------------------- |
| Remove             | Eliminate errors           |
| Transform          | Reduce impact              |
| Winsorize          | Cap extreme values         |
| Robust Models      | Less sensitive to outliers |
| Analyze Separately | Investigate rare events    |
