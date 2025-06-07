# ⚙️ Linker and Loader in Operating Systems

## 🔗 What is a Linker?

### 📌 Definition:
A **Linker** is a tool that **combines object files** (produced by a compiler) and 
creates final **executable file**.

### 🛠️ Responsibilities:
- Resolves **symbol references** (e.g., function or variable names used across files).
- Connects your program with library functions  (like `printf()`).
- Produces an **executable file** ready to be loaded and run.

### 📂 Inputs & Outputs:
- **Input**: Object files (`.o`, `.obj`)
- **Output**: Executable file (`.exe`, `a.out`)

### ✅ Types of Linking:
| Type                | Description                                                       |
|---------------------|--------------------------------------------------------------------
| **Static Linking**  | Copies library code into the executable file at link time.        |
| **Dynamic Linking** | Keeps references to shared libraries; code is linked at run time. |


---

## 🚚 What is a Loader?

### 📌 Definition:
The **Loader** is part of **operating system** that **loads the executable file into memory**  
and prepares it to run.

### 🛠️ Responsibilities:
- Loads program code and data into RAM.
- Allocates memory for the process.

### 📂 Input & Output:
- **Input**: Executable file (produced by the linker)
- **Output**: Running process in memory

---

## 🔄 Which Comes First?

| Step  | Tool      | Role                          |
|-------|-----------|-------------------------------|
| 1️⃣   | **Linker** | Combines object files → executable |
| 2️⃣   | **Loader** | Loads executable into memory and starts execution |