### 🔹Mass Storage Overview 

    • Secondary storage for modern computers
        • serves as an extension of main memory for optimizing process execution
        • to store programs and data permanently
    
    • Permanent Storage
        • Holds user data and applications even after power off.
    
    • Removable Disks
        • Devices like USBs, external HDDs allow portable storage and backups.

    • Storage Technologies
        • Magnetic (HDD): Cheap, large, slower, has moving parts.
        • Electronic (NVM): SSDs, flash memory; faster, durable, no moving parts.

    • Magnetic disks provide bulk of secondary storage of modern computers
        • Drives rotate at 60 to 250 times per second
    
    • Rotation time is the speed of the disk measured in RPM (Round Per Minute) :
        • 7200, 10000, 15000 RPM

    • Transfer rate is rate at which data flow between drive and computer (MB/s)


### 🔹Hard Disks 
    • Platters: commonly 3.5, 2.5, and 1.8
    • Storage: size 30GB to 4TB per drive
    • Performance: 
        • Transfer Rate: 6 GB/sec in Theory and 1GB/sec in practice
        • Seek time: 3ms to 12ms - 9ms common for desktop drives
    • Rotation Latency based on spindle speed

    • Hard Disk Performance:
        • Average access time = average seek time + average latency
        • Average I/O time = average access time + (amount to transfer / transfer rate) + controller overhead



### 🔹What is Nonvolatile Memory (NVM)?

    Nonvolatile memory is a type of memory that keeps data even when the power is turned off.
    
    Think of it like a notebook - once you write something, it stays there until you erase it, even if you close the book.

✅ Common Nonvolatile Memory Devices:
    
    • Solid State Drive (SSD) - Stores data using flash memory.
        - Fast, reliable, and no moving parts.
        - Used in laptops, desktops, and gaming consoles.

    • USB Flash Drive (Pen Drive)
        - Small, portable device for transferring and storing data.
        - Plugs into USB ports.
        - Used for quick backups and file sharing.


------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------


### 🔹 What is Disk Scheduling?
    - When multiple programs request to read or write data on a hard disk, OS decides
        in which order to serve those requests.
    
    Why is it needed?
    - to reduce waiting time
    - to speed up disk access
    - to make system faster and more efficient


### 🔹 Common Disk Scheduling Algorithms
    

### 1. FCFS (First-Come, First-Served)
    - requests are served in the order they arrive
    
   #### Example:
     - If requests come in this order: 40 → 10 → 90
     - The disk head moves to 40, then 10, then 90. 
   #### ✅ Pros:
    - Very simple to implement.
    - Fair (no request starvation)..
   #### ⚠️ Cons:
    - Can be inefficient if requests are far apart.
    - High average seek time.


### 2. SSTF (Shortest Seek Time First)
    - Chooses the closest request to the current position.

   #### Example:
    - If the head is at 50 and requests are 40, 10, 90
    - It will go to 40 first (shortest distance), then 10, then 90.
   #### ✅ Pros:
    - Better performance than FCFS in terms of seek time.
    - Reduces overall head movement.
   #### ⚠️ Cons:
    - May lead to starvation of requests that are far from the current head position.
    - Slightly more complex to implement. 


### 3. SCAN (Elevator Algorithm)
    - The disk arm moves in one direction (like an elevator), serving all requests along the way.
    - When it reaches the end of the disk, it reverses direction and continues servicing.

#### 🧾 Example:
   If the head starts at position **0** and moves toward **199**, it will:
    - Serve all pending requests in that direction
    - Then reverse direction to serve remaining requests
    
    Just like an elevator that goes up, stops at each floor, and then goes down.

#### ✅ Pros:
    - Fair and systematic
    - Handles requests efficiently in both directions

#### ⚠️ Cons:
- A request just missed during a pass must wait for the full sweep


---
### 4. LOOK
    - Similar to SCAN, but the head **only goes as far as the last request** in each direction, 
    not to the disk's end.
    - More efficient by avoiding unnecessary movement.

#### 🧾 Example:
   If the head is moving up and the **last request is at 150**, it will:
    - Stop at 150
    - Then reverse direction instead of going all the way to 199

#### ✅ Pros:
- More efficient than SCAN
- Avoids full disk sweep

#### ⚠️ Cons:
- Still may have longer wait times for edge-positioned requests

---


### 5. C-SCAN (Circular SCAN)
   - The disk arm moves in one direction (like SCAN), **serving requests only on the way up**.
   - Once it reaches the end, it **jumps back to the beginning** without servicing any requests during the return.

#### 🧾 Example:
   If the head starts at **0**, it moves toward **199**, serving all requests. Then it **jumps back to 0** and resumes servicing in the same upward direction.

#### ✅ Pros:
   - Provides **uniform wait times** for all requests
   - Prevents favoritism to middle tracks

#### ⚠️ Cons:
   - **Wastes movement** on the return sweep
   - Slightly more complex than SCAN


---
### 6. C-LOOK
   - A more efficient version of C-SCAN.
   - Instead of going to the end of the disk, the arm moves **only to the last request**, then jumps back to the lowest pending request.

#### 🧾 Example:
   If requests range from **20 to 150**, the head moves from **20 → 150**, then jumps back to **20** and continues.

#### ✅ Pros:
   - Even more **efficient** than C-SCAN
   - Reduces unnecessary movement

#### ⚠️ Cons:
   - Like C-SCAN, may still have longer wait


------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------


# Storage Attachment: A Simple Explanation
    Storage attachment refers to the connection or integration of storage devices (like hard drives, SSDs, 
    or cloud storage) to a computer or server system. It can also refer to how data is linked 
    or made accessible from storage devices to the operating system and applications.

## Types of Storage Attachments

### 1. **Internal Storage**
   - **What it is:** Internal storage is physically connected to the computer or server inside the case. It is often used for operating systems, applications, and data storage.
   - **Examples:**
     - Hard Drives (HDD)
     - Solid-State Drives (SSD)
   - **Connection Types:**
     - SATA (Serial Advanced Technology Attachment)
     - NVMe (Non-Volatile Memory Express)

### 2. **External Storage**
   - **What it is:** External storage refers to devices connected outside the computer or server. These are used for extra storage or backup.
   - **Examples:**
     - External hard drives
     - USB flash drives
     - Network-attached storage (NAS)
   - **Connection Types:**
     - USB (Universal Serial Bus)
     - Thunderbolt
     - eSATA (external Serial ATA)

### 3. **Cloud Storage**
   - **What it is:** Cloud storage refers to storing data remotely over the internet. It is not physically connected to your computer but is accessed via the network.
   - **Examples:**
     - Google Drive
     - Dropbox
     - OneDrive
   - **How it works:** Data is uploaded to remote servers and can be accessed from any device with an internet connection.

## How Storage Attachment Works

- **Internal Storage:** Connected directly to the motherboard via cables like SATA or NVMe, which allow the computer to communicate with the storage device for reading and writing data.
  
- **External Storage:** Uses a physical connection (e.g., USB or eSATA) to link the storage device to the computer. It may be used for transferring data, expanding storage, or backing up files.

- **Cloud Storage:** Data is uploaded to a remote server where it is stored securely. You can access it via the internet from any device, usually with a service account.

## Advantages of Storage Attachments

### Internal Storage:
   - **Speed:** Direct connection offers high-speed data transfer.
   - **Reliability:** Less prone to disconnections or failures compared to external storage.

### External Storage:
   - **Portability:** You can carry your data around easily.
   - **Backup:** A convenient way to create backups for important files.

### Cloud Storage:
   - **Accessibility:** Access your data from anywhere with an internet connection.
   - **Security:** Cloud services often offer encryption and backup solutions for your data.

## Conclusion

Storage attachment is an essential part of any computer or server setup. Whether you're using internal storage for quick access, external storage for portability, or cloud storage for remote access, each type of attachment serves a specific purpose to help you manage your data effectively.



------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------


# 💾 RAID Structure

## 🔹 What is RAID?

**RAID** stands for **Redundant Array of Independent (or Inexpensive) Disks**.

It is a method of **combining multiple physical hard drives** into one logical unit to:
    - Improve performance ✅
    - Increase data reliability ✅
    - Provide fault tolerance ✅

---

## 🔸 Why Use RAID?

- To **protect data** against disk failures
- To **speed up** read/write operations
- To **create backups automatically**

---

## ✅ Common RAID Levels (Simple Explanation)

### 🔹 RAID 0 - **Striping**

- Data is **split** across multiple disks.
- **Fast performance**, but **no fault tolerance**.

🧠  *If one disk fails, all data is lost.*

---

### 🔹 RAID 1 - **Mirroring**

- **Exact copy** of data is written to two (or more) disks.
- Provides **high reliability**.

🧠 *If one disk fails, the other still has the data.*

---

### 🔹 RAID 5 - **Striping with Parity**

- Data and **parity** (error-checking info) are spread across at least **3 disks**.
- Can **tolerate 1 disk failure** without data loss.

🧠 *Balanced between speed, storage efficiency, and safety.*

---

### 🔹 RAID 6 - **Striping with Double Parity**

- Like RAID 5 but can handle **2 disk failures**.
- Needs at least **4 disks**.

🧠 *Extra safety, slightly slower writes than RAID 5.*

---

### 🔹 RAID 10 (1+0) - **Mirroring + Striping**

- Combines RAID 1 and RAID 0.
- Data is **striped** for performance and **mirrored** for safety.
- Needs at least **4 disks**.

🧠 *High speed and high protection.*

---

## 📊 Summary Table

| RAID Level | Min. Disks | Speed | Redundancy | Can Handle Failure? |
|------------|------------|-------|-------------|----------------------|
| RAID 0     | 2          | ✅ Fast | ❌ None      | ❌ No                |
| RAID 1     | 2          | ⚠️ Normal | ✅ Yes       | ✅ One disk          |
| RAID 5     | 3          | ✅ Good | ✅ Yes       | ✅ One disk          |
| RAID 6     | 4          | ⚠️ Slower | ✅✅ Yes      | ✅ Two disks         |
| RAID 10    | 4          | ✅✅ Fast | ✅✅ Yes      | ✅ One per pair      |

---

## 📝 Final Notes

- RAID is **not a replacement for backup**!
- It's used to improve **uptime, speed, and reliability**.
- Choose the RAID level based on **your needs** (speed, safety, cost).

