# Bias and Variance

## Bias

Bias means the model is **too simple** and cannot learn the data properly.

### Characteristics
- Makes many wrong predictions
- Misses important patterns
- Causes underfitting

### Example
A straight line trying to fit curved data.

### Simple Idea
> High bias = Model learns too little

---

## Variance

Variance means the model is **too complex** and learns too much from training data.

### Characteristics
- Learns noise and random details
- Performs well on training data
- Performs poorly on new data
- Causes overfitting

### Example
A model memorizing answers instead of understanding patterns.

### Simple Idea
> High variance = Model learns too much

---

# Easy Comparison

| Bias | Variance |
|---|---|
| Model too simple | Model too complex |
| Underfitting | Overfitting |
| Misses patterns | Learns noise |
| Poor training performance | Poor test performance |

---

# Bias-Variance Tradeoff

A good machine learning model should have:
- Low bias
- Low variance

The goal is to:
- Learn important patterns
- Avoid memorizing noise

---

# Real-Life Analogy

## Bias
A student studies only one page for an exam.

Result:
- Poor understanding
- Many mistakes

---

## Variance
A student memorizes every answer without understanding concepts.

Result:
- Cannot solve new questions

---

## Balanced Model
A student understands concepts and performs well on both old and new questions.