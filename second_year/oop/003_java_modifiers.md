# 🚦 Java Modifiers

## 📌 What are Modifiers?

**Modifiers** are keywords in Java that change the **behavior**, **access level**, or **functionality** of classes, methods, or variables.

They tell Java:
> ""Who can use this?" or "How should this behave?"

There are two types of modifiers:

---

## 🧩 1. Access Modifiers

These control **who can access** the class, method, or variable.

| Modifier    | Meaning                                                        |
|-------------|----------------------------------------------------------------|
| `public`    | Can be accessed **from anywhere**                              |
| `private`   | Can be accessed **only inside the same class**                 |
| *(default)* | No keyword → Can be accessed **only inside the same package**  |
| `protected` | Can be accessed in the **same package** and **subclasses**     |

### 🔍 Example:

```java
public class Car {
    private String color; // Only accessible inside this class

    public void setColor(String c) {
        this.color = c;
    }

    protected void showColor() {
        System.out.println(color);
    }
}
```


# ⚙️ Java Non-Access Modifiers - Simple Guide

Java provides several **non-access modifiers** to control the **behavior** of classes, methods, and attributes (variables).

---

## 🔹 Non-Access Modifiers for Classes

You can use either `final` or `abstract` with classes:

| Modifier   | Description                                                                 |
|------------|-----------------------------------------------------------------------------|
| `final`    | The class **cannot be inherited** (extended) by other classes.              |
| `abstract` | The class **cannot be used to create objects**. Must be inherited.          |

> 📌 If a class is marked `abstract`, it may contain abstract methods that must be implemented by its child classes.

---

## 🔸 Non-Access Modifiers for Attributes and Methods

These modifiers can be used on **fields** (variables) and **methods**:

| Modifier      | Description                                                                 |
|---------------|-----------------------------------------------------------------------------|
| `final`       | Prevents the method or variable from being changed or overridden.          |
| `static`      | Belongs to the **class**, not to any object. Shared across all instances.  |
| `abstract`    | Used **only in abstract classes**. No method body is provided.             |
| `transient`   | Skips the attribute/method during **serialization**. Not saved to file.    |
| `synchronized`| Ensures only **one thread** can access the method at a time.               |
| `volatile`    | Always reads the most recent value of the variable from **main memory**.   |

---

## 🧠 Notes for Beginners

- `final` = **can't change or override**
- `static` = **shared by all objects**
- `abstract` = **no code yet, to be completed later**
- `transient` = **ignored during object saving**
- `synchronized` = **thread-safe method**
- `volatile` = **variable value is always updated across threads**

---

## ✅ Quick Summary Table

| Target       | Modifiers                        |
|--------------|----------------------------------|
| **Class**    | `final`, `abstract`              |
| **Method**   | `final`, `static`, `abstract`, `synchronized` |
| **Attribute**| `final`, `static`, `transient`, `volatile`    |




```java

public class Person {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String newName) {
        this.name = name;
    }
}


```