# 🔹 Inode and File Control Block (FCB)
Understanding how file systems store and manage files is important in OS. 
Two key data structures used for this are:

## 📌 inode (Index Node)
An **inode** is a data structure used in **UNIX/Linux** file systems to store 
information about a file **except its name and data**.

### 🔹 What does an inode contain?
- File type (regular file, directory, etc.)
- File size
- Owner (user ID)
- Permissions (read, write, execute)
- Timestamps (created, modified..)
- Pointers to data blocks on disk

🔍 Note: File **name** is stored in a **directory entry**, not in the inode.

---

## 📌 File Control Block (FCB)

A **File Control Block (FCB)** is a data structure used in many **non-UNIX** systems (like Windows) 
to store information about an open file.

### 🔹 What does an FCB contain?
- File name
- File location on disk
- File size
- File type
- Access permissions
- Pointers to the file's data blocks

---

## 🔄 Summary: inode vs FCB

| Feature            | inode (UNIX/Linux)    | FCB (General Systems)    |
|--------------------|-----------------------|--------------------------|
| Stores file name   | ❌ No                 |  ✅ Yes                 |
| Stores metadata    | ✅ Yes                | ✅ Yes                  |
| Used in            | UNIX/Linux systems     | DOS/Windows systems     |
| Stored in          | Disk (inode table)     | Memory/disk             |

---

## 📝 Conclusion

- **inode** and **FCB** both store important information about files.
- The main difference: **inode** does **not** store the file name, while **FCB** usually **does**.
- Both help the OS manage files and locate their data on disk efficiently.

