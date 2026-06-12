# Data Visualization in Machine Learning — Simple Notes

# Introduction

Data visualization means showing data using:

- charts
- graphs
- plots

It helps people understand data quickly and make better decisions.

In machine learning, visualization is used to:

- understand data
- detect problems
- improve models
- explain results

---

# Why Data Visualization Matters

## 1. Finds Data Problems

Visualization helps detect:

- missing values
- outliers
- duplicate data
- incorrect formats

Example:

A heatmap can quickly show missing values in a dataset.

---

## 2. Shows Relationships in Data

Visualization helps reveal:

- trends
- patterns
- clusters
- correlations

Example:

A scatter plot may show that house prices increase as house size increases.

---

## 3. Helps Improve Models

Visualization helps identify:

- overfitting
- underfitting
- prediction errors

Example:

A learning curve can show whether a model is learning properly.

---

## 4. Makes Results Easy to Understand

Charts and graphs help nontechnical people understand model performance quickly.

---

# Where Visualization Fits in ML Workflow

## 1. Data Collection

Used to check:

- missing values
- duplicate records
- data quality

Common visuals:

- heatmaps
- distribution charts

---

## 2. Exploratory Data Analysis (EDA)

EDA helps understand the dataset before training.

Common visuals:

- histograms
- scatter plots
- box plots
- heatmaps

---

## 3. Feature Engineering

Visualization helps decide:

- which features to keep
- which features to remove
- whether transformations worked

---

## 4. Model Training

Visualization helps monitor training progress.

Common visuals:

- learning curves
- loss curves

---

## 5. Model Evaluation

Visualization helps understand model performance.

Common visuals:

- confusion matrix
- ROC curve
- residual plot

---

# Common Visualization Techniques

## 1. Histogram

A histogram shows how data is distributed.

Useful for:

- detecting skewness
- finding outliers
- understanding distributions

Example:

Most product prices may be under $50 with a few expensive products.

---

## 2. Scatter Plot

A scatter plot compares two numeric variables.

Useful for:

- finding relationships
- identifying clusters
- spotting outliers

Example:

House size vs house price.

---

## 3. Heatmap (Correlation Matrix)

A heatmap shows relationships between features.

Useful for:

- finding highly related variables
- removing redundant features

---

## 4. Box Plot

A box plot shows:

- median
- spread of data
- outliers

Useful for comparing groups.

---

## 5. Learning Curve

A learning curve shows model performance during training.

Useful for detecting:

- overfitting
- underfitting

---

## 6. Confusion Matrix

A confusion matrix shows:

- correct predictions
- wrong predictions

Useful for classification problems.

---

## 7. ROC Curve

ROC curve evaluates classification performance.

AUC score meaning:

- 0.5 = random guessing
- 1.0 = perfect model

---

## 8. Residual Plot

Used for regression models.

Shows prediction errors.

A random scatter around zero usually means the model is working well.

---

# Common Visualization Tools

## 1. Matplotlib

Basic Python visualization library.

Used for:

- line charts
- histograms
- scatter plots

---

## 2. Seaborn

Built on top of matplotlib.

Makes visualization easier and cleaner.

Useful for:

- heatmaps
- box plots
- pair plots

---

## 3. Plotly

Creates interactive charts.

Useful for dashboards and presentations.

---

## 4. TensorBoard

Used in deep learning.

Tracks:

- training loss
- accuracy
- model metrics

---

# Common Mistakes

## 1. Trusting Only Accuracy

High accuracy does not always mean a good model.

Always check:

- confusion matrix
- precision
- recall

---

## 2. Using Wrong Charts

Examples:

- pie charts with too many categories
- line charts for unrelated categories

Choose charts based on the data type.

---

## 3. Confusing Correlation with Causation

Two variables moving together does not mean one causes the other.

---

## 4. Ignoring Residual Plots

Residual plots help detect hidden regression problems.

---

# Conclusion

Data visualization is essential in machine learning.

It helps:

- understand data
- detect problems
- improve models
- explain results

Good visualization leads to:

- better models
- better decisions
- better communication