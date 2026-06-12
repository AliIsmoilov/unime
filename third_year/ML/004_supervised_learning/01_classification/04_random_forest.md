# Random Forest

## What is Random Forest?

Random Forest is a **supervised machine learning algorithm** used for:

- Classification (e.g., spam vs not spam)
- Regression (e.g., predicting house prices)

It works by combining the predictions of many **decision trees** to make a more accurate final prediction.

---

## Random Forest Visualization

### Random Forest Concept Diagram

![Random Forest Diagram](https://www.researchgate.net/profile/Zikri-Nur/publication/382626765/figure/fig4/AS:11431281263500652@1722170449027/sualization-of-the-Process-of-Random-Forest-Classification.ppm)


---

## How Random Forest Works

1. Take random samples from the dataset (bootstrap sampling)
2. Build many decision trees
3. Each tree uses a random subset of features
4. Each tree makes a prediction
5. Final output:
   - **Classification:** majority vote
   - **Regression:** average of all outputs

---

## Why It Works Well

Random Forest improves accuracy by:
- Reducing overfitting (compared to a single decision tree)
- Combining multiple models (ensemble learning)
- Adding randomness to improve diversity

---

## Decision Tree Idea (Basic Building Block)

A decision tree splits data like a flowchart:

Example:
- Is income > 50K?
  - Yes → Approved loan
  - No → Rejected loan

Random Forest = **many such trees combined together**

---

## Key Features of Random Forest

- Uses multiple decision trees
- Each tree sees different data samples
- Each tree sees different features
- Final decision is aggregated

---

## Advantages

- High accuracy
- Works well with large datasets
- Reduces overfitting
- Handles missing values well
- Works for both classification and regression

---

## Disadvantages

- Slower than single decision trees
- Uses more memory
- Harder to interpret than one tree

---

## Applications

- Fraud detection (banking)
- Medical diagnosis
- Stock market prediction
- Recommendation systems
- Credit scoring

---

## Python Example

```python
from sklearn.ensemble import RandomForestClassifier

model = RandomForestClassifier(n_estimators=100)

model.fit(X_train, y_train)

prediction = model.predict(X_test)
```

---

## Summary

Random Forest is an advanced machine learning model that combines many decision trees to improve accuracy and reduce overfitting. It is widely used because it is powerful, flexible, and reliable for real-world problems.