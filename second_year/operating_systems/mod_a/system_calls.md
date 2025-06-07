# System Calls in OS

## 📌 What is a System Call?

- A **system call** is a way for programs (usually user-level applications) to interact with the **operating system (OS)**.
- It acts like a bridge between user space and kernel space.
- Since directed access to hardware and system resources is restricted for security and stability, 
  programs must request these services from the OS using system calls.

---

## 🎯 Why Are System Calls Used?

System calls are essential for:
- 🧠 **Process Control** – Creating, managing, and terminating processes.
- 🧩 **Memory Management** – Allocating and deallocating memory.
- 🔐 **Security and Permissions** – Access control, user authentication.
- 💾 **File Management** – Reading, writing, opening, and closing files.

---

### 🧠 Process Control System Calls

| System Call | Description                                |
|-------------|--------------------------------------------|
| `fork()`    | Creates a new process (child process).     |
| `exec()`    | Replaces the current process image.        |
| `exit()`    | Terminates the calling process.            |
| `wait()`    | Waits for a child process to terminate.    |