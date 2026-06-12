# Feature Engineering

Feature engineering is the process of converting raw data into useful features that help machine learning models make better predictions.

It improves model accuracy by:
- Selecting important data
- Transforming data into machine-readable form
- Reducing noise and irrelevant information

---

# Common Feature Engineering Techniques

## 1. Feature Transformation

### Binning
Converts continuous numerical values into categories.

Example:
- Age → `18-25`, `26-35`, `36-45`

Purpose:
- Simplifies data
- Reduces noise

---

### One-Hot Encoding
Converts categorical data into binary values (0 or 1).

Example:

| Color | Red | Blue | Green |
|--------|--------|--------|--------|
| Red | 1 | 0 | 0 |
| Blue | 0 | 1 | 0 |

Purpose:
- Makes categorical data usable for ML models.
- Suitable for nominal categories.

Caution:
- Creates many columns for high-cardinality features.
- Not efficient when there are many unique categories.

---

### Frequency Encoding
Replaces each category with its frequency (or count) in the dataset.

Formula:

enc(category) = count(category) / Total Samples

Example:

| City | Frequency |
|--------|--------|
| Rome | 3/6 = 0.50 |
| Milan | 2/6 = 0.33 |
| Naples | 1/6 = 0.17 |

Purpose:
- Preserves information about category popularity.
- Useful for high-cardinality categorical features.
- Requires only one column.

Caution:
- Different categories may receive the same frequency.
- Does not capture relationship with the target variable.

---

### Target Encoding
Replaces each category with the average value of the target variable for that category.

Formula:

enc(category) = Average(Target | Category)

Example:

| City | Purchase Rate |
|--------|--------|
| Rome | 0.67 |
| Milan | 0.00 |
| Naples | 1.00 |

Purpose:
- Captures the relationship between a category and the target.
- Often improves predictive performance.
- Useful for high-cardinality features.

Caution:
- Can cause data leakage if calculated using the full dataset.
- Should use techniques such as K-Fold Target Encoding or smoothing.

---

# Feature Extraction & Selection

## PCA (Principal Component Analysis)

Reduces the number of features while keeping most information.

Purpose:
- Simplifies large datasets
- Improves model speed

---

## LDA (Linear Discriminant Analysis)

Reduces dimensions while keeping class differences.

Purpose:
- Helps classification models

---

# Feature Scaling

Feature scaling makes all features have similar ranges.

---

## Min-Max Scaling

Scales values between 0 and 1.

### Formula

![Min-Max Scaling Formula](https://assets.ibm.com/is/image/ibm/screen2:1x1?dpr=on%2C1.5&wid=960&hei=960)

### Meaning

- \(x\) = original value  
- \(\min(x)\) = minimum value  
- \(\max(x)\) = maximum value  
- \(\tilde{x}\) = scaled value  

---

## Z-Score Scaling (Standardization)

Transforms data so that:
- Mean = 0
- Standard deviation = 1

### Formula

![Z-Score Scaling Formula](https://assets.ibm.com/is/image/ibm/screen1:1x1?dpr=on%2C1.5&wid=960&hei=960)

### Meaning

- \(x\) = original value  
- \(\mu\) = mean  
- \(\sigma\) = standard deviation  
- \(z\) = standardized value  

---

# Summary

Feature engineering helps machine learning models perform better by:
- Cleaning and transforming data
- Selecting useful features
- Scaling values properly
- Reducing unnecessary complexity