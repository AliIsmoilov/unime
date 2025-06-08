# What is a File System?
A **file sytem** is a method an operating sytem uses to **store, organize file** 
on a storage device (like hard drive or USB..)

--

## Many types of File Systmes
- There are **many kinds of file systems**, and even one computer might use several at the same time.
- Each file systme has its **own format** and rules for organizing files 

--

## Common File Systems
- **Unix:** UFS, FFS, - basic Unix file systems
- **Windows:** FAT, FAT32(old), NTFS(modern)
- **Linux:** ext4, XFS - commonly used, Linux has more than 130 types in total


# Partitions and Mounting

## What is Partition?
A **partition** is like dividing a hard drive into smaller sections.
Each section acts like separate drive that can store data

### Why Use Partition?
- To separate operating systems (e.g., Windows and Linux).
- To organize data (e.g., one for system files, one for personal files).
- To improve performance or safety (less risk of losing everything).

--

## What is Mounting?
**Mounting** is how operating system connects a partition so you can use it.

When you `mount` a file system:
- The OS assigns it a location (called a **mount point**).
- You can then open and use files from that location.

### Examples:
- In Windows: Drives are mounted as letters like `C:\` or `D:\`.
- In Linux/Unix: Drives are mounted to folders like `/home` or `/media/usb`.

--

# File Systme Data Structures
File systems use two main types of data structures to manage files:

## 1. On-Disk File System
These  are stored **permanently on the storage device**.
They keep file data and structure safe even after the computer is turned off.

### Key Elements:
- **Boot Block**: Starts the system; contains code to load the OS.
- **Superblock**: Stores info about the file system (size, type, etc.).
- **Inodes**: Metadata for each file (name, size, location, permissions).
- **Data Blocks**: Where actual file contents are stored.
- **Directory Structure**: Organizes files into folders.

--

## 2. In-Memory File System
These exist **temporarily in RAM** while the computer is running.  
They help the system access files faster.

### Key Elements:
- **In-Memory Inode Table**: Copies of active file metadata.
- **Directory Cache**: Speeds up folder lookups.
- **Buffer Cache**: Temporarily stores file data being read/written.
- **Mount Table**: Tracks which file systems are currently active.

## Summary
- **On-Disk** structures are permanent - store the real data and metadata.
- **In-Memory** structures are fast - used for performance during use.
- Both work together to keep file access efficient and reliable.

--

# Disk Block Allocation

## What is Disk Block Allocation?
- When a file is saved, it's broken into small units called **blocks**.
- **Disk block allocation** is how the operating system decides **where to store these blocks** on the disk.

Efficient allocation is important for:
- Fast file access
- Saving disk space
- Avoiding file fragmentation

---

## Disk Blocl Allocation Methods

### 1. Contiguous Allocation
- Stores all blocks of a file **next to each other**
- ✅ Fast access
- ❌ Can cause problems if there isn't enough space in one place

### 2. Linked Allocation
- Each bloack has a pointer to the **next block**
- ✅ Easy to grow files
- ❌ Slower access (need to follow pointers)

### 3. Indexed Allocation
- Uses a separate **index block** that keeps track of all file block locations.
- ✅ Fast and flexible
- ❌ Uses extra space for index blocks

--- 

## Summary

| Method       | Pros                       | Cons                          |
|--------------|----------------------------|-------------------------------|
| Contiguous   | Fast access                | Needs large free space        |
| Linked       | Flexible file size         | Slower, pointer overhead      |
| Indexed      | Fast random access         | Extra space for index block   |
