# Machine Learning Exam Formula

## 1. Accuracy

Measures how many predictions are correct.

Formula:

Accuracy = (TP + TN) / (TP + TN + FP + FN)

Where:

* TP = True Positive
* TN = True Negative
* FP = False Positive
* FN = False Negative

Example:

TP = 50, TN = 130, FP = 10, FN = 10

Accuracy = (50 + 130) / (50 + 130 + 10 + 10)

Accuracy = 180 / 200

Accuracy = 0.90

---

## 2. Min-Max Scaling

Used to scale values into the range [0,1].

Formula:

Scaled Value = (x - Min) / (Max - Min)

Where:

* x = original value
* Min = minimum feature value
* Max = maximum feature value

Example:

x = 30

Min = 10

Max = 50

Scaled Value = (30 - 10) / (50 - 10)

Scaled Value = 20 / 40

Scaled Value = 0.50

---

## 3. Z-Score Standardization

Shows how far a value is from the mean in terms of standard deviations.

Formula:

Z = (x - Mean) / Standard Deviation

Example 1:

Mean = 50

SD = 5

Value = 65

Z = (65 - 50) / 5

Z = 15 / 5

Z = 3

Example 2:

Mean = 50

SD = 5

Value = 40

Z = (40 - 50) / 5

Z = -10 / 5

Z = -2

---

## 4. Gini Impurity

Used in Decision Trees.

Formula:

Gini = 1 - (p1² + p2² + ...)

For Binary Classification:

Gini = 1 - (pA² + pB²)

Example:

pA = 0.6

pB = 0.4

Gini = 1 - (0.6² + 0.4²)

Gini = 1 - (0.36 + 0.16)

Gini = 1 - 0.52

Gini = 0.48

Shortcut:

Remember:

Gini = 1 - Sum of squared probabilities

---

## 5. Bootstrap Sampling

Important fact:

About 63% of unique samples appear in a bootstrap sample.

About 37% are left out (Out-Of-Bag samples).

Easy Exam Memory:

Bootstrap → 63% unique samples

---

## 6. Hard Voting

Rule:

Choose the class with the most votes.

Example:

Predictions = [1, 0, 1]

Class 1 votes = 2

Class 0 votes = 1

Result = Class 1

Example:

Predictions = [0, 0, 1]

Class 0 votes = 2

Class 1 votes = 1

Result = Class 0

---

# Exam Shortcuts

Accuracy:
(TP + TN) / Total Samples

Min-Max Scaling:
(x - Min) / (Max - Min)

Z-Score:
(x - Mean) / SD

Gini:
1 - Sum(probability²)

Bootstrap:
63% unique samples

Hard Voting:
Majority wins
