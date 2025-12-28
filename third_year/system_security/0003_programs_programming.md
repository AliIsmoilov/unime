# System Security – Presentation 3  
## Programs & Programming (Short Notes)

## Programs and Security
Security problems often come from **programming mistakes**.
Bad code → vulnerabilities → attacks.

---

## Memory & Programs
- Programs store **data and instructions** in memory
- If memory is misused → security risk

---

## Buffer Overflow
A **buffer overflow** happens when:
- More data is written than a buffer can hold

### Why It’s Dangerous
- Overwrites other data or code
- Can change program execution
- Can give attacker program or OS control

### Common Places
- Stack
- Heap
- Program memory

### Harm from Buffer Overflows
- Modify program data
- Execute attacker code
- Gain system-level privileges

### Countermeasures
- Check input size
- Avoid off-by-one errors
- Use safe languages/libraries
- Limit program privileges
- Use stack canaries
- Code analysis tools

---

## Incomplete Mediation
- System does **not check permissions every time**
- Leads to unauthorized access

### Prevention
- Validate all input
- Always check permissions
- Use reference monitor

---

## TOCTTOU (Time of Check – Time of Use)
- Condition changes **between check and use**
- Common in file access

---

## Race Conditions
- Two processes access shared data at the same time
- Order matters → security bug

---

## Other Programming Errors
- Off-by-one errors
- Integer overflow
- Backdoors
- Unsafe libraries
- Wrong parameter length/type

---

## Malware
Malware = **malicious software**

### Types
- **Virus** – attaches to programs
- **Worm** – spreads through network
- **Trojan Horse** – looks useful, does harm

### Malware Harm
- Delete or encrypt files
- Steal passwords
- Modify system settings
- Spread to other systems

---

## Malware Spread
- Email attachments
- Infected programs
- Downloads
- Autorun features

---

## Malware Detection
- Virus scanners use **signatures**
- Detect known patterns
- Hard to detect new malware

---

## User Countermeasures
- Install trusted software only
- Be careful with attachments
- Keep backups
- Assume websites may be unsafe

---

## Developer Countermeasures
- Write small, simple modules
- Encapsulation & isolation
- Least privilege
- Defensive programming
- Genetic diversity

---

## Code Testing
- Unit testing
- Integration testing
- Regression testing
- Penetration testing

---

## Secure Design Principles
- Least privilege
- Simple design
- Complete mediation
- Separation of privileges
- Ease of use

---

## Summary
- Programming bugs cause security risks
- Buffer overflows are very dangerous
- Malware exploits weak programs
- Secure coding + testing reduce attacks
