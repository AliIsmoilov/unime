# Statistical Machine Learning

## Introduction
Statistical Machine Learning combines statistics and machine lerning to help computers learn patterns from data and make predictions

Statistics helps machine learning models to:
- Understand data
- Find patterns
- Measure uncertainty
- Improve predictions

---

# What is statistics?
Statistics is the science of extracting insight from data. It organizes, analyzes and interprets information to uncover patterns and make decisions under uncertainty.

In Machine Learning, statistics helps models learn from data and make decisions.


---

# Descriptive Statistics

Descriptive statistics summarize and explain data.

These concepts are commonly used during Exploratory Data Analysis (EDA).

---

## Mean

The ariphmetic average value of data.

### Example

```text
[2, 4, 6, 8, 10]

Mean = (2 + 4 + 6 + 8 + 10) / 5
Mean = 6
```

---

## Median

The middle value in sorted data.

Useful when data contains outliers.

### Example

```text

If the number of values is odd
The median is the middle number:

[1, 2, 4, 5, 6]

Median = 4

---

If the number of values is even

The median is the average of the two middle numbers:

[1, 2, 3, 4, 5, 6]

Middle values = 3 and 4

Median = (3 + 4) / 2 = 3.5

```

---

## Mode

The value that appears most often.

### Example

```text
[1, 2, 2, 3, 4]

Mode = 2
```

---

## Standard Deviation

Measures how spread out values are from the mean.

- Low value → data is close to the average
- High value → data is widely spread


### Example

```text
Dataset A: [4, 5, 5, 6]

Low standard deviation = more consistency

Dataset B: [1, 5, 9, 13]

High standard deviation = more variation
```

---

# Probability in Machine Learning

Probability tells us **how likely something is to happen**.

It ranges from:

- **0** → impossible  
- **1** → certain  

### Why ML uses probability

Machine Learning uses probability to:
- Make predictions
- Handle uncertainty
- Measure confidence in results

---

## Example

```text
Probability of rain = 0.8
```

➡ There is an **80% chance of rain**

---

# Important Probability Terms

## Random Variable

A random variable is a value that comes from a **random process**.

### Example

```text
Coin Flip

Heads = 1
Tails = 0
```

➡ The outcome is uncertain before the flip

---

## Conditional Probability

Conditional probability means finding the chance of something **given that something else already happened**.

Notation:

```text
P(A | B)
```

### Simple Meaning

> “What is the probability of A, if B is already true?”

### Example

```text
Probability of passing exam
given student studied
```

---

# Probability Distributions

A probability distribution shows **how values are spread** in a dataset.

It helps ML models understand:
- common outcomes
- rare outcomes
- overall patterns

---

## Bernoulli Distribution

A Bernoulli distribution has only **two outcomes**:

- **1 → Success**
- **0 → Failure**

### Example

```text
Spam Detection

Spam = 1
Not Spam = 0
```

### Simple Idea

Only two possible results: yes/no, true/false, 1/0

Used in:
- Logistic Regression
- Binary Classification

---

## Gaussian (Normal) Distribution

A Gaussian distribution is a **bell-shaped curve** where most values are near the average.

### Example

```text
Human Heights

Most people are near average height,
very few are extremely short or tall.
```

### Simple Idea

- Middle values are most common  
- Extreme values are rare  

Used in:
- Linear Regression
- Error Analysis
- Many real-world natural phenomena

---

# Why Statistics Matters in Machine Learning

Statistics helps machine learning models to:
- Learn from data
- Detect patterns
- Make better predictions
- Reduce errors

Without statistics, Machine Learning models cannot properly understand or analyze data.