# 🔹 Distributed File System (DFS)

## What Is a Distributed File System?
A **Distributed File System (DFS)** allows files to be stored across **multiple servers or computers**, 
but appear to users as if they are stored in one place.  
This makes it easy to access, manage, and share files over a network.

---

## 💡 Simple Explanation
Imagine you're using a system like **Google Drive** or **Dropbox**.  
Even though your files are stored on different servers, you can access them as if they're all in one folder.  
That's how a DFS works!

---

## 🔑 Key Features of DFS

- **Transparency:** You don't need to know where files are stored, it looks like they're all in one place.
- **Accessibility:** Access files from anywhere on the network.
- **Fault Tolerance:** The system can keep working even if one server fails.
- **Scalability:** Add more servers to increase storage easily.
- **Performance:** Data can be accessed from the fastest or nearest server.

---

# 🔹 Cluster-Based DFS Model

## What Is a Cluster-Based DFS?
A **Cluster-Based DFS** is a type of DFS where **multiple servers (a cluster)** work together 
to store and manage files.  
The files are split and spread across several machines in the cluster 
to improve speed, storage, and reliability.

---

### How It Works:

- Files are divided into chunks and stored on multiple nodes (computers) in the cluster.
- When a user requests a file, the system combines the chunks from different nodes and delivers the full file.
- If one node fails, the system can still get the data from another copy on a different node.

---

### Benefits:
- High **availability** and **fault tolerance**
- Excellent **performance** for large-scale data
- Easy to **scale** by adding more nodes to the cluster

---

# 🔹 Network File System (NFS)

## What is NFS?
**NFS(Network File System)** is a system developed by **Sun Microsystems** that allows users 
to **access files over a network** as if they were on their own local machine.

NFS makes it easy to **share files between computers**, especially in UNIX/Linux environments.

---

## 💡 Simple Example
You're on your laptop and open a file that's actually stored on your office computer.
With NFS, it feels like the file is right on your laptop, but it's somewhere else on the network.

---

## NFS Design - How It Works
NFS uses a **client-server** model:

- The **server** shares files.
- The **client** accesses those files over the network.

The files are not copied — the client just accesses and uses them **remotely**.

---

## 📡 Protocols Used in NFS

### 1. 🔁 **RPC (Remote Procedure Call)**

- RPC allows a program on one computer (client) to request a service from a program on another computer (server).
- Used by NFS to perform file operations (like open, read, write) on the server from the client side.

### 2. 📄 **XDR (eXternal Data Representation)**

- XDR is used to **format data** sent between the client and server so that different systems (with different architectures) can understand each other.
- Ensures data is consistent and readable on all devices.

### 3. 🌐 **Mount Protocol**

- Establishesinitial logical connection between server and client
- A protocol that allows the client to **attach** (or mount) the server's directory into its local file system.
- Without this, the client wouldn't be able to access the shared files.

---

## 📦 Summary of Protocol Roles

| Protocol | Role in NFS                                         |
|----------|-----------------------------------------------------|
| **RPC**  | Allows file operations over the network             |
| **XDR**  | Formats data so it can be shared between systems    |
| **Mount**| Connects remote directories to the client's system  |