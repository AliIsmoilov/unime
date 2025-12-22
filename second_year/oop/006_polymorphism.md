# 🧩 Polymorphism in Java

## ✅ What is Polymorphism?

The word **Polymorphism** comes from Greek and means "**many forms**."

In Java, **polymorphism** allows the same method name or object reference to behave **differently depending on the context**.  
It is one of the core principles of Object-Oriented Programming (OOP) and helps make your code more flexible and reusable.

---

## 🎯 Why is Polymorphism Important?

- It allows a **single interface** to represent **multiple behaviors**.
- It makes code **easier to extend** and **maintain**.
- It enables **dynamic behavior** at runtime.
- It supports the **Open-Closed Principle** (open for extension, closed for modification).

---

## 🧰 Types of Polymorphism in Java

Java supports **two main types** of polymorphism:

---

### 1. 🛠️ Compile-Time Polymorphism (Static)

Also called **Method Overloading**.

- Happens during **compilation**.
- Involves **multiple methods** in the same class with the **same name** but **different parameters**.
- The compiler determines which method to run based on the method signature.

📌 Key Characteristics:
- Method selection is done at **compile-time**.
- Used when **same action** is needed for **different input values**.
- Improves **readability** and **organization** of related functionality.

---

### 2. 🚀 Run-Time Polymorphism (Dynamic)

Also called **Method Overriding**.

- Happens during **execution (runtime)**.
- Involves a **subclass** providing a **specific implementation** of a method that is already defined in its **parent class**.
- Method is called through a **reference of the parent class**, but the actual method executed is from the **child class**.

📌 Key Characteristics:
- Method decision is made at **runtime** based on the object type.
- Enables **dynamic behavior**.
- Supports **flexibility** and **extensibility** of code.

---

## 🧠 Real-World Analogy

Think of a single action like **"drive"**:

- A **Car**, **Bike**, and **Truck** all implement **drive()**, but each one drives differently.
- The action is the same (drive), but the behavior changes depending on the object (Car, Bike, Truck).

This is **Polymorphism**: same method name, different behaviors.

---

## 📌 Summary Table

| Type                    | Also Known As       | When It Happens  | Based On                          |
|-------------------------|---------------------|------------------|-----------------------------------|
| Compile-time Polymorphism | Method Overloading | At Compile Time  | Method name + parameters          |
| Run-time Polymorphism     | Method Overriding  | At Run Time      | Actual object type used at runtime |

---

## 🚦 Benefits of Polymorphism

- Promotes **code reusability**
- Reduces **complexity**
- Makes programs **easier to scale and maintain**
- Supports **loose coupling** and **interface-based design**

---

## 🧾 Conclusion

Polymorphism allows Java programs to **act flexibly** and adapt to different situations using the **same method or reference name**.

It is a powerful tool in OOP that encourages **clean, modular, and maintainable** code by allowing **one interface** to support **multiple behaviors**.

