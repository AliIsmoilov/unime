# System Security – Presentation 5  
## Operating Systems Security (Short & Simple Notes)

---

## Role of Operating System (OS)
The OS controls **hardware, software, and users**.  
Security in OS means **protecting system resources** from misuse.

---

## What Does the OS Protect?
- **Memory** – prevents programs from accessing others’ data
- **I/O devices** – disks, printers, keyboards
- **Programs & processes**
- **Files & data**
- **Network resources**

*Example:* One user cannot read another user’s files.

---

## History of Operating Systems (Very Brief)
- **Early systems** – single user, no protection
- **Multiprogramming** – many programs share CPU
- **Multi-user systems** – need strong security
- **Personal computers** – user-based access control

---

## OS Design for Security

### Layered Design
- OS is built in layers
- Each layer has specific responsibility
- Higher layers use lower layers

*Benefit:* Easier to understand and secure.

---

### Modular Design
- OS divided into modules
- Each module does one task

*Example:* File system module, memory module

---

## Virtualization
Virtualization creates **virtual machines (VMs)**.

- Each user sees only their own VM
- Controlled by **hypervisor**
- Can run multiple OSs on one machine

### Security Benefit
- Isolation between users
- Attacks stay inside one VM

*Example:* Honeypot VM used to trap attackers safely.

---

## Separation and Sharing

### Separation Methods
- **Physical** – separate machines
- **Temporal** – users take turns
- **Logical** – access rules
- **Cryptographic** – encryption

### Sharing Methods
- Share nothing
- Share everything
- Share but limit access

*Example:* Shared printer but one job at a time.

---

## Memory Protection (Very Important)

### Fence Registers
- Define boundary for memory access
- Program cannot go beyond limit

### Base & Bounds Registers
- **Base** = start address
- **Bounds** = size limit
- CPU checks every access

### Segmentation
- Memory divided into segments (code, data, stack)
- Each segment has permissions

### Paging
- Memory divided into fixed-size pages
- Helps isolation and efficiency

---

## Secure OS Design Principles
- **Simplicity** – less complexity = fewer bugs
- **Layered trust** – critical parts strongly protected
- **Least privilege** – minimal permissions
- **Complete mediation** – check every access

---

## Kernel & Security Kernel

### Kernel
Core part of OS:
- Process control
- Memory management
- Interrupt handling

### Security Kernel
- Enforces security rules
- Controls all access to resources

---

## Reference Monitor
A system component that:
- Checks every access
- Cannot be bypassed
- Is small and secure

*Example:* Every file access is checked before opening.

---

## Trusted Systems

### Trusted System
A system proven to enforce security correctly.

### Characteristics
- Clear security policy
- Strong enforcement mechanisms
- Independent evaluation

---

## Trusted Computing Base (TCB)
- All components critical to security
- Smaller TCB = more secure system

*Example:* Kernel + access control mechanisms.

---

## Other Trusted System Features

### Secure Startup
- OS loads securely
- No tampering during boot

### Trusted Path
- User communicates directly with OS
- Cannot be faked

### Object Reuse Control
- Memory cleared before reuse
- Prevents data leakage

### Audit
- Logs security events
- Logs must be protected

---

## Rootkits (Very Important)

### What is a Rootkit?
- Malware that gains **root/admin privileges**
- Hides inside OS
- Hard to detect

### What Rootkits Do
- Modify OS functions
- Hide files, processes
- Reinstall themselves

*Example:* Rootkit hides malicious process from task manager.

---

## Summary
- OS is central to system security
- Protects memory, programs, devices, networks
- Uses layering, modularity, and virtualization
- Trusted systems rely on TCB and reference monitor
- Rootkits are dangerous OS-level malware
