# Semi-Supervised Learning

## What Is It?

Semi-supervised learning is a type of machine learning that uses:

- A small amount of labeled data
- A large amount of unlabeled data

It combines ideas from:

- Supervised learning → uses labeled data
- Unsupervised learning → uses unlabeled data

---

# Why Is It Useful?

Labeling data can be expensive and slow.

Example:
- To train an AI to recognize cats and dogs, humans must label thousands of images.
- In medical or scientific fields, experts are needed to label data.

Semi-supervised learning helps AI learn better even when only a few labeled examples are available.

---

# Simple Example

Imagine:

- 10 images are labeled:
  - "cat"
  - "dog"

- 10,000 images are unlabeled.

The AI studies the labeled images first, then uses patterns in the unlabeled images to improve itself.

---

# Comparison

| Type | Uses Labeled Data? | Uses Unlabeled Data? |
|---|---|---|
| Supervised Learning | Yes | No |
| Unsupervised Learning | No | Yes |
| Semi-Supervised Learning | Yes | Yes |

---

# Main Idea

The AI assumes that:
- Similar data points belong to the same category.
- Groups (clusters) of similar data likely share the same label.

So if many unlabeled images look similar to labeled cat images, the AI guesses they are cats too.

---

# Common Techniques

## 1. Pseudo-Labeling
The model predicts labels for unlabeled data and then trains on those predictions.

Example:
- AI predicts an image is 95% likely to be a dog.
- It temporarily treats it as labeled data.

---

## 2. Label Propagation
Labels spread from labeled examples to nearby unlabeled examples.

---

## 3. Pretraining
The model first learns patterns from unlabeled data, then fine-tunes using labeled data.

Used heavily in:
- Large Language Models (LLMs)
- Computer vision

---

# Real-World Uses

- Image recognition
- Speech recognition
- Medical diagnosis
- Fraud detection
- Text classification
- Drug discovery

---

# Advantages

- Needs less labeled data
- Saves time and money
- Often improves accuracy
- Useful when labels are hard to get

---

# Disadvantages

- Wrong guesses can reinforce errors
- Unlabeled data must still be relevant
- More complex than standard supervised learning

---

# In One Sentence

Semi-supervised learning teaches AI using a small amount of labeled data plus a large amount of unlabeled data to improve learning accuracy.