# Precision and Recall

## Precision

**Formula:**

Precision = TP / (TP + FP)

**Meaning:**

Measures how many of the instances predicted as **positive** are actually positive.

**Question it answers:**

> "When the model predicts positive, how often is it correct?"

**Example:**

- TP = 80
- FP = 20

Precision = 80 / (80 + 20) = 80%

**High Precision:**
- Few false positives
- Fewer false alarms

---

## Recall

**Formula:**

Recall = TP / (TP + FN)

**Meaning:**

Measures how many of the actual positive instances are correctly identified.

**Question it answers:**

> "How many actual positives did the model find?"

**Example:**

- TP = 80
- FN = 20

Recall = 80 / (80 + 20) = 80%

**High Recall:**
- Few false negatives
- Misses fewer positive cases

---

## Key Difference

| Metric | Focus |
|----------|----------|
| Precision | Correctness of positive predictions |
| Recall | Coverage of actual positive cases |

---

## Easy Memory Trick

- **Precision:** Of everything predicted positive, how much was correct?
- **Recall:** Of everything actually positive, how much did we find?

---

## When to Use

### Precision Important
When false positives are costly:
- Spam detection
- Fraud alerts
- Search results

### Recall Important
When false negatives are costly:
- Cancer detection
- Disease screening
- Security systems

---

## Summary

- **Precision = TP / (TP + FP)** → Accuracy of positive predictions.
- **Recall = TP / (TP + FN)** → Ability to find actual positives.
- Ideal models have **high precision** and **high recall**.