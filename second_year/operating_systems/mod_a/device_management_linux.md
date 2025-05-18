## 🔹Layers of a Linux System
- Linux is composed of a series of layers that interact with one another, from user-level
applications down to the physical hardware.


| Layer                | Description                                                                            |
|----------------------|----------------------------------------------------------------------------------------|
| **User interface**   | User programs and utilities that interact with the system (e.g., Firefox, LibreOffice) |
| **Library interface**| Command-line interface (e.g., bash, zsh) that allows users to interact withthe kernel  |
| **Utilities**        | System programs and services (e.g., cp, ls, systemd)                                   |
| **System Libraries** | Standard functions and routines used by applications (e.g., libc, OpenSSL)             |
| **Kernel**           | Core of the operating system: manages hardware, processes, memory, etc.                |
| **Hardware**         | Physical components (CPU, RAM, disk, peripherals)                                      |



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

## 🔹 Classes of Devices and Modules in Linux

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

| Device Class     | Data Transfer Type     | Example Devices               |
|------------------|------------------------|-------------------------------|
| Character Device | Byte-by-byte           | Keyboard, Mouse, Serial Ports |
| Block Device     | Block-based            | Hard Disk, USB Drive          |
| Network Device   | Packets (via network)  | Ethernet, Wi-Fi               |


---

## 🔹 Linux File Types

Linux file system uses different file types to manage various kinds of data and operations. 
Each file type serves a specific purpose.

---


## Summary of File Types

| File Type                | Symbol | Description                                                                 |
|------------------------- |--------|-----------------------------------------------------------------------------|
| **Regular File**         | `-`    | Standard files that store user or application data. Can be text binary..    |
| **Directory**            | `d`    | Contains entries that are references to other files and directories         |
| **Character File**       | `c`    | Represents devices that handle data one character at a time                 |
| **Block Special File**   | `b`    | Represents devices that handle data in blocks ( hard drives, flash drives). |
| **FIFO (Named Pipe)**    | `p`    | Allows data to flow in one direction between processes.                     |
| **Symbolic Link**        | `l`    | A shortcut or reference to another file or directory. Works like a pointer. |
| **Socket**               | `s`    | Used for communication between processes, often over a network.             |

---

- Each file type plays a key role in how Linux interacts with data, hardware, and processes. 
- You can identify the file type by the first character in the output of `ls -l`. 


## 🔹 What are Linux Device Drivers (Modules)?
- A **Device Driver** is a type of kernel module that allows the OS to interact with hardware devices.
- Translates general kernel instructions into hardware-specific operations.

---

### Types of Device Drivers
- **Character drivers** - e.g., keyboard, serial ports.
- **Block drivers** - e.g., hard drives.
- **Network drivers** - e.g., Ethernet cards.

---

## Useful Commands
- `lsmod` - List loaded modules.
- `modprobe <module>` - Load a module automatically with dependencies.
- `insmod <module.ko>` - Manually insert a module.
- `rmmod <module>` - Remove a module.
- `dmesg` - View kernel logs (helpful for debugging modules).


## 🔹 What is a Loadable Kernel Module (LKM)?
- A **Loadable Kernel Module** is a piece of code that can be added to or removed from the 
  Linux kernel at runtime.
- Used to extend kernel functionality without rebooting.
- Examples: device drivers, file systems, or system calls.

### Benefits
- No need to recompile the kernel.
- Enables dynamic hardware support.
- Keeps the kernel lightweight and flexible.