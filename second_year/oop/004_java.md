# 📘 Java OOP: Association, Aggregation, and Composition

-   What is Association?
-   What is Aggregation?
-   What is Composition?
-   What is Coupling?
-   What is Cohesion?


---

## 🔗 What is Association?

**Association** is a relationship between two separate classes where one class uses or interacts with another.  
There is **no ownership** — both objects can exist independently.

### ✅ Example:
If a `Student` object has a reference to a `Teacher`, and vice versa, this is **association**.

```java
class Student {
    Teacher teacher;
}

class Teacher {
    Student student;
}
```

## 🧱 What is Aggregation?

Aggregation is a special form of association. It represents a **"has-a"** relationship where:

- One class contains or uses another.
- Both objects can exist independently.
- This is loose coupling.

### 🔍 Explanation:

- Room objects are created **outside** the House.
- House uses them, but doesn't **own** them.
- Room can exist **even after** the House is gone.


## 🔒 What is Composition?

Composition is a stronger form of association where:

- One class owns another.
- The owned object cannot exist without the owning object.
- This is strong coupling.

### 🔍 Explanation:

- House directly creates and owns its Rooms.
- If House is deleted, the Rooms are also deleted.
- Room has no purpose outside of House.

---


# Coupling and Cohesion in Java OOP

---

## 🔗 Coupling

- **Definition:**  
  Coupling refers to the degree of **dependency** between different classes or modules.

- If two classes are **tightly coupled**, they depend heavily on each other. Changes in one class will likely affect the other.

- If two classes are **loosely coupled**, they have minimal dependencies, making the system easier to maintain and extend.

- **Goal:**  
  In good OOP design, **loose coupling** is preferred because it increases flexibility and reduces the ripple effect of changes.

### Example:
If class A directly creates and manipulates objects of class B, that's tight coupling.  
If instead class A interacts with class B through interfaces or abstract classes, coupling is looser.

---

## 🎯 Cohesion

- **Definition:**  
  Cohesion is about how **closely related** the responsibilities of a single class or module are.

- A class with **high cohesion** means all its methods and attributes are focused on a single task or purpose.

- A class with **low cohesion** has unrelated responsibilities mixed together, making it harder to understand and maintain.

- **Goal:**  
  High cohesion improves code readability, maintainability, and reusability.

### Example:
A `User` class that only handles user details and authentication has high cohesion.  
If it also handles database connections or file I/O, cohesion is low.

---

## Summary Table

| Term      | Meaning                            | Goal in OOP             |
|-----------|----------------------------------|------------------------|
| Coupling  | Dependency between classes        | Achieve **loose coupling** |
| Cohesion  | Relatedness of responsibilities   | Achieve **high cohesion**  |

---