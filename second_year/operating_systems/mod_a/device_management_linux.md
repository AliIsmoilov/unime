## 🔹Layers of a Linux System
- Linux is composed of a series of layers that interact with one another, from user-level
applications down to the physical hardware.


|----------------------|----------------------------------------------------------------------------------------|
| Layer                | Description                                                                            |
|----------------------|----------------------------------------------------------------------------------------|
| **User interface**   | User programs and utilities that interact with the system (e.g., Firefox, LibreOffice) |
| **Library interface**| Command-line interface (e.g., bash, zsh) that allows users to interact withthe kernel  |
| **Utilities**        | System programs and services (e.g., cp, ls, systemd)                                   |
| **System Libraries** | Standard functions and routines used by applications (e.g., libc, OpenSSL)             |
| **Kernel**           | Core of the operating system: manages hardware, processes, memory, etc.                |
| **Hardware**         | Physical components (CPU, RAM, disk, peripherals)                                      |
|----------------------|----------------------------------------------------------------------------------------|


## 📌 Visual Reference
A visual version of this table is available in the link below:  
📄 [Device Management in Linux - PDF](https://upload.wikimedia.org/wikipedia/commons/d/d4/Layers_of_a_Linux_system.png)

---


## 📂 File-Oriented Approach in Linux

- In Linux, the **file-oriented approach** refers to how Linux treats almost everything — including hardware and processes — as files. This design simplifies interaction with the system by providing a unified interface for accessing and managing resources.

- These objects appear in the file system, and programs can open them,
read from them, and write to them practically as if they were normal files.

- > **"Everything is a file"** — In Linux, all system components (like devices, processes, 
configuration data) are represented as files.

---


### 🔑 Key Features of Linux I/O

- All devices (e.g. disks, keyboards, network cards) are accessed through file paths like `/dev/sda` or `/dev/tty`.
- The kernel uses a standardized interface known as **Unix I/O** to communicate with devices.
- I/O operations such as `read()`, `write()`, `open()`, and `close()` work the same way for:
  - Files
  - Devices
  - Pipes
  - Sockets

---

### 💡 Why It Matters

> **"All input and output is handled in a consistent and uniform way."**

This consistency simplifies system programming and shell scripting because developers don't need special APIs for each device.

---

## Classes of Devices and Modules in Linux

In Linux, hardware devices are grouped into different **classes** based on how they handle data. Each class has specific characteristics and is managed by a specific type of driver module in the kernel.

---

## 1. Character Devices

- **Data is transferred one character (byte) at a time**
- No buffering or fixed-size blocks
- Rather than transferring data in blocks the data is transfered character by character.
  One transfer can consist of multiple characters.
- Accessed like a stream (e.g., using `read()` and `write()`)

**Examples:**
- Keyboard (`/dev/input/event0`)
- Serial ports (`/dev/ttyS0`)
- Mice (`/dev/mouse`)
- Text console (`/dev/console`)

---

## 2. Block Devices

- **Data is transferred in fixed-size blocks**
- Supports random access (can read/write at any position)
- Commonly used for storage
- Block devices do buffered I/O, meaning that the the data is collected in a buffer
  until a full block can be transfered.

**Examples:**
- Hard drives (`/dev/sda`)
- USB flash drives (`/dev/sdb`)
- SSDs

---

## 3. Network Devices

- Used for **sending and receiving data over a network**
- What they read and write is not bytes but send and receive packets
- Do not appear as regular device files in `/dev/` and have unique names
- Interact with the system through the **network stack**, not typical file I/O

**Examples:**
- Ethernet interfaces (`eth0`)
- Wi-Fi interfaces (`wlan0`)
- Virtual interfaces (`lo` for loopback)

---

## Summary

|------------------|------------------------|-------------------------------|
| Device Class     | Data Transfer Type     | Example Devices               |
|------------------|------------------------|-------------------------------|
| Character Device | Byte-by-byte           | Keyboard, Mouse, Serial Ports |
| Block Device     | Block-based            | Hard Disk, USB Drive          |
| Network Device   | Packets (via network)  | Ethernet, Wi-Fi               |
|------------------|------------------------|-------------------------------|
