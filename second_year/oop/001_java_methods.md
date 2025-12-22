## 🔹 1. What is a Method?

A **method** is a block of code that performs a specific task. It helps make code reusable and organized.

For example:
```java
public void sayHello() {
    System.out.println("Hello!");
}
```


## 🔹 2. Access Modifiers

Access modifiers define **where** a method (or variable) can be accessed from in your Java program.

## 🔁 Summary Table: Access Levels and Security


| Modifier     | Accessible From                        | Security Level |
|--------------|-----------------------------------------|----------------|
| `private`    | Same class only                         | 🔒 Very High    |
| *(default)*  | Same package only (no modifier used)    | 🔐 High         |
| `protected`  | Same package + subclasses (any package) | 🟡 Medium       |
| `public`     | Any class, any package                  | 🟢 Low          |



### ✅ Example:

```java
public class Example {

    public void showPublic() {
        System.out.println("This is public");
    }

    private void showPrivate() {
        System.out.println("This is private");
    }

    void showDefault() { // default (no modifier)
        System.out.println("This is default");
    }

    protected void showProtected() {
        System.out.println("This is protected");
    }
}
```


## 🔨 What is a Constructor in Java?

A **constructor** is a **special method** used to **create objects** (instances) of a class. It **initializes** the object's data when the object is created.

---

## ✅ Key Points

- A constructor has the **same name** as the class.
- It has **no return type** (not even `void`).
- It runs **automatically** when you create a new object using `new`.

---

## 🧱 Example

```java
public class Car {
    String model;

    // Constructor
    public Car() {
        model = "Toyota";
        System.out.println("Car is created!");
    }

    public static void main(String[] args) {
        Car myCar = new Car();  // Constructor is called here
        System.out.println(myCar.model); // Output: Toyota
    }
}
```

# 🔨 What is a Constructor in Java?

A **constructor** is a special method in Java that is used to **initialize objects** of a class. It runs **automatically** when you create an object using the `new` keyword. Its main purpose is to **set up initial values** for object properties.

---

## ✅ Key Points

- A constructor has the **same name** as the class.
- It has **no return type** (not even `void`).
- It is **automatically called** when an object is created.
- If you don't define a constructor, Java provides a **default constructor**.

---

## 🧱 Example

```java
public class Car {
    String model;

    // Constructor
    public Car() {
        model = "Toyota";
        System.out.println("Car is created!");
    }

    public static void main(String[] args) {
        Car myCar = new Car();  // Constructor is called here
        System.out.println(myCar.model); // Output: Toyota
    }
}
```




## 💡 Constructor vs Method

| Feature         | Constructor                        | Method                        |
|-----------------|------------------------------------|-------------------------------|
| Name            | Same as class name                 | Any valid name                |
| Return type     | No return type (not even `void`)   | Must have a return type       |
| Called when     | Object is created                  | Called manually by code       |
| Purpose         | Initialize the object              | Perform some task             |

---

## 🧠 Summary

- A **constructor** is a special method used to **create and initialize** objects.
- It has **no return type** and must have the **same name as the class**.
- **Java provides a default constructor** if you don't create any.
- You can define **multiple constructors** using **constructor overloading**.
- **Constructors are not called manually**; they run automatically when the object is created.



# 🟦 Java `this` Keyword

## 📌 What is `this`?

Sometimes a constructor or method has a parameter with the same name as a class variable. When this happens, the parameter temporarily hides the class variable inside that method or constructor.

To refer to the class variable and not the parameter, you can use the this keyword:

---

## 🧠 Why do we use `this`?

We use `this` to:
- Avoid **confusion** between variables that have the same name.
- Refer to the **current object’s variables or methods**.
- Call another **constructor** inside the same class.

---

## ✅ Example:

```java
public class Car {
    String color;

    // Constructor
    Car(String color) {
        this.color = color;
    }

    void showColor() {
        System.out.println("The car color is: " + this.color);
    }
}
```