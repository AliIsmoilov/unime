## 🔹File Concept / Meaning
- A **file** is a collection of related data stored on disk, treated as a single unit by the OS. 
- It can contain text, images, videos, programs, etc.
- Contents defined by file's creator

---

## 🔹User View of Files
From a user's perspective, files are:
- **Named Items**: Users recognize and manage files using meaningful names.
- **Extensions**: The suffix (like `.txt`, `.jpg`) tells users and the OS what kind of data the file holds.
- **Icons and Apps**: Files have icons and are associated with default applications for opening (e.g., double-clicking a `.pdf` opens Adobe Reader).
- **Hierarchical View**: Files are organized in folders/directories for easier navigation.
- **Properties**: Users can see attributes like size, last modified date, and permissions via file properties.
- **Types**: Users distinguish files as documents, images, videos, applications, etc., based on extensions or preview thumbnails.
- **Access Rights**: Users can set who can view, edit, or execute a file.

---

## 🔹File Types

| File Type    | Usual Extensions        | Function / Purpose                         |
|--------------|-------------------------|--------------------------------------------|
| Text         | `.txt`, `.docx`, `.rtf` | Store readable text or formatted documents |
| Image        | `.jpg`, `.png`, `.gif`  | Store pictures and graphics                |
| Audio        | `.mp3`, `.wav`, `.aac`  | Store sound or music                       |
| Video        | `.mp4`, `.avi`, `.mkv`  | Store video content                        |
| Executable   | `.exe`, `.bin`, `.sh`   | Programs that can be run by the OS         |
| Compressed   | `.zip`, `.rar`, `.tar`  | Archive and compress multiple files        |
| Spreadsheet  | `.xls`, `.xlsx`, `.csv` | Store data in rows and columns             |
| PDF/Document | `.pdf`                  | Portable document format (read-only)       |
| Web Files    | `.html`, `.css`, `.js`  | Build and style web pages                  |
| System Files | `.sys`, `.dll`          | Used by the OS for system-level functions  |

---

## 🔹Why Are File Extensions Needed?
- File extensions help the OS and users to indetify types of file and choose right program
  to open it. For example, a file ending with `.mp3` is recognized as an audio file and opened with a music player. Without extensions, the system wouldn't know how to handle the file correctly.

---

## 🔹 File Magic Numbers
- Special byte sequences at the beginning of a file used to identify file types.
- More reliable than file extensions.
- Examples:
  - **JPEG**: `FF D8 FF`
  - **PNG**: `89 50 4E 47`
  - **PDF**: `25 50 44 46`
  - **ZIP**: `50 4B 03 04`

---

## 🔹File Attributes
- **Name**: File identifier visible to the user.
- **Type**: File format/category (text, binary, image, etc.).
- **Location**: Path in the directory structure.
- **Size**: Data size (in KB, MB, etc.).
- **Timestamps**: Created, modified, or last accessed times.
- **Permissions**: Rules on who can read, write, or execute the file.
- **Owner**: User who created or owns the file.

---

## 🔹Basic File Operations provided by OS

- **Create** - Makes a new empty file and adds it to the folder/directory.
- **Write** - Adds or updates content in a file.
- **Read** - Reads data from file.
- **Reposition** - Moves the read/write pointer to a specific location in the file.
- **Delete** - Removes the file completely from the storage.
- **Truncate** - Cuts down the size of a file by removing some or all content. Faster than delete.
Keeps file information like name and permissions.

---

## 🔹 File Locking
File locking is used to control access to a file by multiple users or programs at the same time.

- **Purpose**: Prevents data corruption or conflicts.
- **Types**:
  - **Shared Lock**: Multiple users can read the file.
  - **Exclusive Lock**: Only one user can read/write; others must wait.

## Access Methods
These are ways to read or write data in a file.

### 1. Sequential Access
- Data is accessed in order, from beginning to end.
- Common for text files or logs.

### 2. Direct Access (Random Access)
- Can jump to any part of the file directly using a position (like record number).
- Useful for databases.

### 3. Indexed Access
- Uses an index (like a table of contents) to quickly find data.
- Index stores key values and their file locations.

## Indexed File Access
- A file access method where an **index** is created.
- The index maps **keys** to the **location** of data in the file.
- Allows fast searching and updating.
- Common in database systems and large record files.


---


##                                      Directory in Operating Systems


### 🔹 What is a Directory?
A **directory** is a special file that stores information about other files and directories. 
It helps organize files on a storage device.

### Why Do We Need Directories?
- To keep files organized and easy to find.
- To avoid name conflicts by grouping files into folders.
- To support user access control and file management.

### Operations Performed on a Directory
- **Create**: Make a new directory.
- **Delete**: Remove an existing directory.
- **Rename**: Change the directory name.
- **List**: Show files and subdirectories inside it.
- **Search**: Find files or directories by name.
- **Traverse**: Go through directory contents (used in file systems).

# Types of Directory Structures
- **Single-Level Directory**
- **Two-Level Directory**
- **Tree Structure**
- **Acyclic Graph Directory**
- **General Graph Directory**

---

## Simple Directory Structures

### 🔹 Single-Level Directory

- **Description**: 
  - All files are stored in a **single directory**.
  - This is the most basic directory structure.
  
- **Advantages**:
  - **Simple** and easy to implement.
  - No need to manage complex paths or subdirectories.

- **Disadvantages**:
  - **No organization**: As the number of files grows, it becomes harder to manage.
  - **Name conflicts**: Multiple files with the same name cannot exist, making file naming very important.
  - Hard to scale when many files are needed.


---

### 🔹Two-Level Directory

- **Description**: 
  - Divides files into **user-specific directories**.
  - The first level is the root directory, and each user has a subdirectory under it.
  
- **Advantages**:
  - **Better organization**: Users have their own directories, making it easier to manage files.
  - Reduces **name conflicts** since each user can have files with the same name in their own directory.

- **Disadvantages**:
  - Still limited in organizing files, as each user only has one directory.
  - Cannot support complex hierarchies, which might be needed as the number of users or files grows.



## Advanced Directory Structures

### 🔹Tree Structure / Hierarchical Structure

- **Description**: 
    - The **Tree Structure** organizes files in a hierarchical fashion, using directories (also called **folders**) that can contain **subdirectories**.
    - The structure resembles a **tree**, with the **root directory** at the top and multiple branches of subdirectories leading down.
  
- **Advantages**:
  - **Scalable**: Can handle a large number of files by grouping them into categories or subdirectories.
  - **Easy to Navigate**: Users can easily find files by following the directory hierarchy.
  - **Efficient File Management**: Organizes files logically, reducing clutter and improving access.

- **Disadvantages**:
  - **Complexity**: The more levels of subdirectories, the more complex the structure becomes.
  - **Performance**: Searching through deep hierarchies may be slower than flatter structures, depending on how the file system is implemented.


### 🔹Acyclic Graph Directory

- Allows files and directories to be **shared** by having **multiple parents**.
- Useful when the same file or folder needs to appear in different locations (e.g., shortcuts, shared folders).
- **No cycles** are allowed — the structure must not loop back to the same directory.
- **Advantage**: Saves space and supports file sharing.
- **Disadvantage**: More complex to manage compared to tree structures.


### 🔹General Graph Directory

- Similar to the acyclic graph, but **cycles are allowed**.
- A directory or file can eventually link back to itself, directly or indirectly.
- Requires **cycle detection algorithms** to avoid infinite loops during operations like searching or deletion.
- **Advantage**: Flexible and supports complex sharing needs.
- **Disadvantage**: Difficult to manage and may cause issues like infinite traversal or inconsistent data if not handled properly.


