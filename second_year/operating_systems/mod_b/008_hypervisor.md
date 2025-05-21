# What is a Hypervisor?

A **hypervisor**, also known as a **Virtual Machine Monitor (VMM)** is software or hardware that allows 
to run  **multiple virtual machines (VMs)** on a single physical computer.

Each VM acts like separate computer, with its own **operating system (OS)** and **applications**, 
while sharing the same physical hardware.

---

## 🔧 Why Do We Need a Hypervisor?
- It helps in running multiple OSs on one physical system.
- It provides **resource management**, **isolation**, and **security**.
- It is a key component in **virtualization** and **cloud computing**.

---

# 📚 Types of Hypervisors

There are **two main types**:

![TTypes of Hypervisors](https://www.digitaltut.com/images/ENCOR/Virtualization/Type1_Type2_Hypervisors_detail.jpg)


---

## 🖥️ Type 1 - Bare Metal Hypervisor

**Definition**:  
Runs **directly on the physical hardware** without needing a host operating system.

**How it works**:
- The hypervisor sits between the hardware and the virtual machines.
- Can directly communicate with the hardware resources

**✅ Advantages**:
- High **performance** and **efficiency**
- Better **security** and **stability**

**❌ Disadvantages**:
- Requires dedicated hardware
- More complex to manage

---

## 💻 Type 2 - Hosted Hypervisor

**Definition**:  
Runs **on top of an existing operating system** like Windows, macOS, or Linux.

**How it works**:
- The hypervisor runs as an **application** within the host OS.
- The host OS manages the hardware, and the hypervisor manages the VMs.

**✅ Advantages**:
- Easier to install and use
- Good for **development**, **testing**, and **learning**

**❌ Disadvantages**:
- Slightly lower performance due to extra OS layer
- Less secure than Type 1 (depends on the host OS)

---


## 🔄 Summary

- A **hypervisor** enables multiple VMs to run on one physical machine.
- **Type 1** runs directly on the hardware - best for enterprise or server use.
- **Type 2** runs on top of an OS - best for personal or development use.
- Both are essential to **modern virtualization** and **cloud environments**.