# 🔹 Parallel Systems

## What Are Parallel Systems?
Parallel systems are computers that use **two or more processors (CPUs)** to do work **at the same time**.  
This helps the system work **faster** and handle **more tasks** by splitting the workload.

---

## 🔹 SMP (Symmetric Multiprocessing)

### What Is SMP?
**SMP** stands for **Symmetric Multiprocessing**.

- All processors (CPUs) are **equal**.
- They **share the same memory** and run the **same operating system**.
- Each CPU can do the same type of work, and any CPU can take on any task.

### 📌 Example:
A modern laptop or desktop with multiple cores.  
Each core can run the same programs and access the same memory.

---

## 🔹 AMP (Asymmetric Multiprocessing)

### What Is AMP?
**AMP** stands for **Asymmetric Multiprocessing**.

- Processors are **not equal**.
- One CPU acts as the **main controller (master)**, and others do **specific jobs (slaves)**.
- Not all CPUs share the same memory or run the same operating system.

### 📌 Example:
In an embedded system, one CPU controls the screen, while another monitors sensors.

---

## 🔄 SMP vs AMP – Quick Comparison

| Feature             | SMP (Symmetric)                  | AMP (Asymmetric)                    |
|---------------------|----------------------------------|-------------------------------------|
| **CPU Roles**       | All CPUs are equal               | Each CPU has a specific role        |
| **Memory Sharing**  | Shared memory                    | May or may not share memory         |
| **Operating System**| Same OS on all CPUs              | Different OS or no OS               |
| **Programming**     | Easier                           | More complex                        |
| **Used In**         | PCs, laptops, servers            | Embedded systems, IoT devices       |

---

# 🔹 Network-Based Systems

## What Is a Network-Based System?
A **Network-Based System** connects multiple devices (like computers and servers) using a **network** (such as the internet or a local network).  
These devices can **share data**, **communicate**, and **work together**.

### 🔑 Key Features:
- **Communication:** Devices can send and receive information.
- **Resource Sharing:** Devices can share files, printers, and services.
- **Distributed Work:** Tasks can be split across multiple machines to improve performance.

---

# 🔹 Distributed Operating Systems (DOS)

## What Is a Distributed Operating System?
A **Distributed Operating System** manages a group of **separate computers** connected by a network,  
so they work together as if they were **a single system**.

It hides the fact that the system is made up of multiple computers.  
To the user, it feels like working with just **one powerful computer**.

### 🔑 Key Features:
- **Transparency:** The system hides the complexity of multiple machines from the user.
- **Scalability:** You can add more computers as needed to handle more work.
- **Fault Tolerance:** If one computer fails, the system can keep running.
- **Decentralization:** There's no single central controller — all machines help manage the system.

---

