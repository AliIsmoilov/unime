# Virtual CPUs (vCPUs) in Virtual Machines

## 1. What is Virtualization?

In virtualization, a **physical computer (host)** runs one or more **Virtual Machines (VMs)**. Each VM acts like a separate computer with its own operating system, apps, and virtual hardware.

---

## 2. What is a vCPU?

- A **vCPU** (virtual CPU) is a virtual version of a physical CPU (**pCPU**).
- It's assigned to a VM by the **hypervisor** (the virtualization layer).
- Each VM sees vCPUs as if they are real CPU cores.

### Example:
If your host has 4 physical cores, you could run 2 VMs with 2 vCPUs each. The hypervisor decides how these vCPUs share the physical cores.

---

## 3. How Do vCPUs Work?

- The **hypervisor** schedules vCPUs to run on available physical CPU resources.
- vCPUs might **share** physical cores with others depending on load.
- The mapping between vCPUs and pCPUs is dynamic and managed by the hypervisor.

### Example:
A host with 8 cores (16 threads with Hyper-Threading) can run:
- 4 VMs × 4 vCPUs each = 16 total vCPUs
- The hypervisor spreads these across the 16 hardware threads.

---

## 4. Choosing 1 vs. Multiple vCPUs

| vCPU Setup         |                Best For                            |
|--------------------|----------------------------------------------------|
| **1 vCPU**         | Lightweight apps, simple tasks                     |
| **Multiple vCPUs** | Heavy apps (e.g., databases), multi-threaded tasks |

> **Note:** More vCPUs ≠ Better performance (if the host lacks enough CPU resources)

---

## 5. What is Hyper-Threading?

- A feature from Intel that lets **1 physical CPU core** behave like **2 logical cores**.
- Allows better use of CPU resources by handling multiple threads at once.
- In VMs, each logical core can be assigned as a vCPU.

---

## 6. vCPU Scheduling

The **hypervisor** decides:
- Which vCPU runs on which pCPU
- When each vCPU gets CPU time

### Common Scheduling Algorithms:

| Scheduler Type          | Description                                     |
|-------------------------|-------------------------------------------------|
| **Fair Scheduler**      | Shares CPU time evenly across VMs               |
| **Priority Scheduler**  | Gives more CPU time to higher-priority VMs      |
| **Real-Time Scheduler** | For tasks needing precise timing (special uses) |
| **Work-Conserving**     | Keeps CPU busy if there's work to do            |

---

## 7. Gang Scheduling

- **All vCPUs** of a VM are scheduled to run **at the same time**.
- Useful for apps that need parallel execution.
- Can **waste CPU** if not all vCPUs are busy.

---

## 8. Microsoft Hyper-V Scheduler

- Uses a **partition-based scheduler**.
- The **Root Partition** manages other VMs.
- Supports:
  - **Core-based** scheduling (by CPU core)
  - **Thread-based** scheduling (by CPU thread)

---

## 9. VMware vSphere Overview

- Virtualization platform from VMware.
- Includes **ESXi** (hypervisor) + tools like **vCenter**.

### Key Features:
- **vMotion**: Move VMs between hosts live.
- **DRS (Distributed Resource Scheduler)**: Balances resources.
- **HA (High Availability)**: Restarts VMs after a failure.
- Uses its own **smart CPU scheduler**.

---

## 10. Citrix Hypervisor

- Previously called **XenServer** (based on the Xen Project).
- Open-source hypervisor for desktops and servers.
- Often used in **Virtual Desktop Infrastructure (VDI)**.

### Features:
- Live migration
- Snapshots
- GPU virtualization support

---

## 11. Binary Translation

- A **software method** used in older virtualization systems.
- Converts guest OS instructions to safe versions the host can run.
- **Slower** than hardware-based virtualization.

---

## 12. Hardware vs. Software Virtualization

| Type                        | Description                                                 | Performance |
|-----------------------------|-------------------------------------------------------------|-------------|
| **Hardware-Assisted**       | Uses CPU features like **Intel VT-x**, **AMD-V**            | Fast        |
| **Software-Based**          | Uses **binary translation** or **paravirtualization**       | Slower      |

### Hardware-Based:
- Instructions run **directly** on CPU.
- Examples: VMware ESXi, Hyper-V, KVM

### Software-Based:
- Hypervisor must **emulate** or **translate** instructions.
- Used in early virtualization solutions.

---

## Summary
Virtual CPUs (vCPUs) are key to how virtual machines operate. The hypervisor handles vCPU scheduling to share physical CPU resources efficiently. Understanding vCPUs, scheduling, and hypervisor features helps you design better virtual environments.

