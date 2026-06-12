generate me # System Security – Introduction (Short Notes)

## What is Computer Security?
Computer security means **protecting computer assets**:
- Hardware
- Software
- Data

## Assets
Assets are **valuable things** in a system (data, programs, devices).
If assets are damaged or stolen → loss occurs.

## Basic Security Terms
- **Vulnerability** – a weakness in the system  
- **Threat** – something that can cause harm  
- **Attack** – when a threat exploits a vulnerability  
- **Control (Countermeasure)** – protection to reduce or remove vulnerabilities  

## Relationship
- Threats exploit **vulnerabilities**
- **Controls** block or reduce threats

## CIA Triad (Core of Security)
1. **Confidentiality** – only authorized users can access data  
2. **Integrity** – data is correct and not changed illegally  
3. **Availability** – systems and data are accessible when needed  

### Extra Security Properties
- **Authentication** – proving identity
- **Nonrepudiation** – users cannot deny their actions

## Access Control
Defines **who can access what** and **what actions they can perform**.

## Types of Threats
- **Interception** – unauthorized access (stealing data)
- **Interruption** – system becomes unavailable
- **Modification** – data is changed illegally
- **Fabrication** – fake data or objects are created

## Attackers
Different attackers have different:
- Skills
- Resources
- Motives

## Advanced Persistent Threat (APT)
APTs are:
- Organized
- Well-funded
- Patient
- Silent
- Long-term attackers

## MOM Model (Attacker Requirements)
An attacker needs:
- **Method** – skills and tools
- **Opportunity** – time and access
- **Motive** – reason to attack

## Security Controls
Ways to protect systems:

### Encryption
- Scrambles data to protect confidentiality
- Helps integrity
- Must be used correctly

### Software Controls
- Password checks
- Access permissions
- Intrusion detection
- Secure coding & testing (pen testing)

### Hardware Controls
- Smart cards
- Firewalls
- Intrusion detection systems
- Physical device protection

### Policies & Physical Controls
- Password policies
- Locked doors
- Guards
- Backups
- Disaster planning

## Security Goals
1. **Prevention** – stop attacks
2. **Detection** – find attacks
3. **Recovery** – fix damage and continue working

## Effectiveness of Controls
- Users must understand **why** security is needed
- Controls must be:
  - Easy to use
  - Efficient
  - Properly used
- Regular review is necessary

## Weakest Link Principle
Security is only as strong as the **weakest part**  
(human, software, hardware, or process).

## Summary
- Vulnerabilities → exploited by threats
- Controls protect against attacks
- CIA (Confidentiality, Integrity, Availability) is the foundation
- Different threats need different controls



# System Security – Presentation 2  
## Authentication, Access Control & Cryptography (Short Notes)

## Authentication
Authentication means **proving who you are**.

### Authentication Methods
1. **Something you know**  
   - Passwords  
   - Security questions  

2. **Something you are**  
   - Biometrics (fingerprint, face, iris)

3. **Something you have**  
   - Smart cards  
   - Tokens  
   - OTP devices

### Password Attacks
- Guessing
- Dictionary attacks
- Brute-force attacks
- Rainbow tables

### Password Storage
- **Plaintext** – insecure
- **Concealed (hashed)** – more secure

### Biometrics – Problems
- Expensive
- Can be slow
- False matches
- Privacy concerns
- Single point of failure

### Tokens
Physical or digital items used for login  
(e.g. smart cards, OTP apps)

### Single Sign-On (SSO)
- One login for multiple systems
- Easier for users
- Risk if one account is compromised

---

## Access Control
Access control decides **who can do what** in a system.

### Access Control Goals
- Check every access
- Least privilege (minimum permissions)
- Track user activity (logs)
- Control access in detail

### Access Control Models
- **Access Control Matrix** – users vs resources
- **Access Control List (ACL)** – permissions per resource
- **Capability List** – permissions per user
- **Role-Based Access Control (RBAC)** – permissions by role
- **Reference Monitor** – checks all access requests

---

## Encryption
Encryption protects data during storage and transfer.

### Problems Solved by Encryption
- Message interception
- Message modification
- Fake message creation
- Message blocking

### Basic Encryption Terms
- **Plaintext** – original data
- **Ciphertext** – encrypted data
- **Encryption** – locking data
- **Decryption** – unlocking data
- **Key** – secret value used in encryption

---

## Types of Encryption

### Symmetric Encryption
- Same key for encrypt & decrypt
- Fast
- Key sharing is difficult

**Examples:**
- DES (old, weak)
- AES (modern, secure)

### Asymmetric (Public Key) Encryption
- Two keys: public & private
- Public key encrypts
- Private key decrypts
- Slower but more secure for key exchange

---

## Stream vs Block Ciphers
- **Stream cipher** – encrypts data bit by bit
- **Block cipher** – encrypts fixed-size blocks (AES)

---

## Hashing & Integrity

### One-Way Hash Function
- Converts data into fixed-size value
- Cannot be reversed
- Used for password storage & integrity

### Digital Signatures
- Verify sender identity
- Ensure message integrity
- Provide non-repudiation

---

## Certificates & Certificate Authorities (CA)
- **Certificate** = identity + public key
- Signed by trusted CA
- Used in HTTPS and secure communication

---

## Summary
- Authentication verifies identity
- Access control limits actions
- Encryption protects data
- Symmetric & asymmetric encryption work together
- Certificates build trust on the internet



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


# System Security – Presentation 4  
## Web Security, Management & Incidents (Short Notes)

---

## Web Security (User Side)

### Browser Vulnerabilities
Browsers are common targets because users trust them.

### Common Browser Attacks
- **Man-in-the-Browser**  
  Attacker secretly changes what you send/see in the browser.  
  *Example:* Bank transfer amount is changed without you noticing.

- **Keystroke Logger**  
  Records everything you type (passwords, cards).  
  *Example:* Malware logs your keyboard input.

- **Page-in-the-Middle**  
  You see a fake page instead of the real one.  
  *Example:* Fake login page that looks like Gmail.

- **Program Download Substitution**  
  You download software, but malware is installed instead.  
  *Example:* Fake “Free PDF Reader” with spyware.

- **User-in-the-Middle**  
  Tricking users into doing actions for attackers.  
  *Example:* Solving CAPTCHA for spammers.

---

## Fake & Malicious Web Content
- **Fake websites** – look real, steal data  
- **Fake code** – hidden malicious scripts  
- **Tracking bugs** – track user behavior secretly  
- **Clickjacking** – invisible buttons trick you into clicking  
- **Drive-by download** – malware installs without permission  

---

## Injection Attacks

### Cross-Site Scripting (XSS)
Attacker injects scripts into web pages.
```html
<script src="http://badsite.com/xss.js"></script>



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



# System Security – Presentation 6  
## Network Security (Short & Simple Notes)

---

## What is Network Security?
Network security means **protecting data and systems while data travels over a network**.

*Example:* Protecting emails, passwords, and files sent over the internet.

---

## Network Transmission Media
Ways data travels:
- **Cable** – copper wires
- **Optical fiber** – light signals (fast & secure)
- **Microwave**
- **WiFi**
- **Satellite**

### Media Vulnerability
Wireless media (WiFi, satellite) is **easier to intercept** than wired.

---

## OSI Model (Very Short)
A model that explains how data moves in layers.

Important idea:  
➡ **Security can be applied at different layers**

*Example:*  
- TLS → Transport layer  
- Firewalls → Network layer  

---

## Threats to Network Communication

### 1. Interception
Unauthorized viewing of data  
*Example:* Sniffing passwords on public WiFi

### 2. Modification
Unauthorized data change  
*Example:* Changing amount in online payment

### 3. Fabrication
Creating fake data  
*Example:* Fake email or fake packet

### 4. Interruption
Blocking access  
*Example:* Website taken down by attack

---

## Why Networks Are Vulnerable
- Many entry points
- Anonymous attackers
- Shared resources
- High complexity
- Unknown perimeter
- Unknown data path

---

## Data Corruption Attacks
- **Sequencing** – changing packet order
- **Substitution** – replacing data
- **Insertion** – adding fake data
- **Replay** – reusing captured data

*Example:* Reusing a captured login request.

---

## Wireless (WiFi) Security

### WiFi Vulnerabilities
- Easy interception
- Weak authentication
- SSID broadcast
- Unauthorized access

---

## WEP (Failed Security)
WEP = Wired Equivalent Privacy (old WiFi security)

### Why WEP Failed
- Weak keys
- Static keys
- Weak encryption (RC4)
- No real authentication
- Easy to crack in minutes

➡ **WEP is NOT secure**

---

## WPA / WPA2 (Secure WiFi)
WPA replaced WEP.

### Why WPA/WPA2 is Better
- Dynamic keys
- Strong encryption (AES)
- Integrity protection
- Secure authentication
- Four-way handshake

*Example:* Modern home WiFi uses WPA2/WPA3.

---

## Denial of Service (DoS)

### What is DoS?
Attack that **breaks availability**.

### Common DoS Attacks
- Ping flood
- Smurf attack
- Teardrop attack
- DNS spoofing
- Session hijacking

### DDoS
Distributed DoS using many infected machines (botnets).

*Example:* Thousands of computers attack one website.

---

## Network Encryption

### Link Encryption
- Encrypts data between two nodes
- Each link decrypted & re-encrypted

*Example:* ISP internal links

### End-to-End Encryption
- Data encrypted from sender to receiver
- Intermediate nodes cannot read data

*Example:* HTTPS, WhatsApp messages

---

## Secure Communication Tools

### SSH (Secure Shell)
- Secure remote login
- Replaces Telnet
- Encrypts commands & data

### SSL / TLS
- Protects web communication
- TLS is modern version of SSL
- Provides:
  - Encryption
  - Server authentication
  - Data integrity

*Example:* HTTPS websites

---

## Certificates
- Bind identity to public key
- Issued by trusted CA
- Used in TLS/HTTPS

---

## Onion Routing
- Data sent through many layers
- Hides source & destination

*Example:* Tor network

---

## VPN (Virtual Private Network)
- Creates encrypted tunnel
- Secures public networks

*Example:* Access company network from home.

---

## Firewalls

### What is a Firewall?
A device that **filters network traffic** based on rules.

---

## Types of Firewalls
- Packet-filtering firewall
- Stateful inspection firewall
- Application proxy
- Circuit-level gateway
- Guard (advanced proxy)
- Personal firewall (host-based)

---

## What Firewalls Can / Cannot Do
✅ Control network perimeter  
❌ Cannot protect data outside perimeter  
❌ Cannot stop all malicious content  

---

## DMZ (Demilitarized Zone)
- Isolated network area
- Hosts public servers (web, mail)

*Example:* Company website server in DMZ.

---

## IDS & IPS

### IDS (Intrusion Detection System)
- Detects attacks
- Raises alerts

### IPS (Intrusion Prevention System)
- Detects + blocks attacks

### Types
- Host-based (HIDS)
- Network-based (NIDS)
- Signature-based
- Heuristic-based

---

## DLP (Data Loss Prevention)
Prevents sensitive data leakage.

Looks for:
- Keywords
- Patterns
- Encryption

*Best for accidental leaks.*

---

## SIEM
Security Information & Event Management:
- Collects logs
- Correlates events
- Helps detect attacks

---

## Summary
- Networks face interception, modification, fabrication, interruption
- WPA2 is far stronger than WEP
- DoS attacks target availability
- Encryption protects data in transit
- Firewalls, IDS, VPNs are key defenses


# System Security – Presentation 7  
## Database Security (Short & Simple Notes)

---

## What is Database Security?
Database security means **protecting stored data from unauthorized access, modification, or loss**.

*Example:* Protecting customer data in a banking system.

---

## Basic Database Terms

- **Database** – organized collection of related data  
- **DBMS (Database Management System)** – software that manages databases  
  *(e.g., MySQL, Oracle, PostgreSQL)*  
- **Database Administrator (DBA)** – person responsible for database management and security  
- **Record** – one complete data entry (row)  
- **Field / Attribute** – one data item (column)  
- **Schema** – structure of the database (tables, fields, relations)  
- **Subschema** – part of the database visible to a specific user  

---

## Queries
A **query** is a request to the database to:
- Read data
- Insert data
- Update data
- Delete data  

Queries must be controlled to prevent unauthorized access.

---

## Database Security Requirements

### 1. Physical Integrity
Protects database from physical damage.

*Examples:*  
- Power failure  
- Disk crash  

---

### 2. Logical Integrity
Ensures database structure remains correct.

*Example:* Table relationships are not broken.

---

### 3. Element Integrity
Only authorized users can change specific data values.

*Example:* Only HR can modify salary data.

---

### 4. Auditability
All database actions are logged.

*Example:* Tracking who changed data and when.

---

### 5. Access Control
Defines what users can read or modify.

*Example:* Students can view grades but cannot change them.

---

### 6. User Authentication
Verifies user identity before database access.

*Example:* Login using username and password.

---

### 7. Availability
Database must be accessible when needed.

*Example:* Online shopping database must work 24/7.

---

## Reliability & Integrity Concepts

- **Reliability** – database works continuously without failure  
- **Database integrity** – entire database is protected  
- **Element accuracy** – only correct values are stored  

---

## Two-Phase Update (Safe Database Updates)

### Phase 1: Intent
- Prepare changes
- Lock required records
- Write commit flag

### Phase 2: Write
- Apply all changes
- Remove commit flag

➡ If failure occurs, database can recover safely.

---

## Locks & Atomic Operations
- Records are locked during updates
- Updates are **atomic** (all-or-nothing)

*Example:* Bank transfer either completes fully or does not happen.

---

## Sensitive Data

Data is sensitive when:
- It is **inherently sensitive** (passwords)
- It comes from a **sensitive source**
- It is **declared sensitive** (classified data)
- It is part of a **sensitive attribute** (salary)
- It can be inferred from other data

---

## Types of Data Disclosure

- **Exact data** – full value revealed  
- **Bounds** – showing limits only  
- **Negative result** – revealing info by absence  
- **Existence** – confirming something exists  
- **Inference** – guessing data indirectly  
- **Aggregation** – combining data to reveal hidden info  

*Example:* Average salary exposing individual salary.

---

## Preventing Data Disclosure

### Suppression
Do not show sensitive results.

---

### Limited Response
Show ranges instead of exact values.

*Example:* Age shown as “20–25”.

---

### Randomization Techniques
- Add small random errors
- Swap values between records  

➡ Keeps statistics useful while protecting privacy.

---

## Security vs Precision
- More security → less precise data  
- More precision → higher privacy risk  

➡ Balance is required.

---

## Data Mining

### What is Data Mining?
Finding patterns and relationships in large datasets using:
- Statistics
- Machine learning
- Pattern recognition

---

### Security & Privacy Risks
- Huge data volume
- High damage if leaked
- Sensitive patterns discovered indirectly

*Example:* Predicting health conditions from shopping data.

---

## Data Mining Security Challenges
- Preserving privacy
- Granular access control
- Secure data storage
- Transaction logging
- Real-time monitoring

---

## Summary
- Databases store critical and sensitive data
- Strong access control and auditing are essential
- Sensitive data can leak indirectly
- Suppression and randomization reduce disclosure risk
- Data mining increases security and privacy challenges



# System Security – Presentation 8  
## Cloud Computing Security (Short & Simple Notes)

---

## What is Cloud Computing?
Cloud computing means **using computing resources (servers, storage, software) over the internet on demand**.

**Key features:**
- On-demand self-service (use when needed)
- Broad network access (access from anywhere)
- Resource pooling (shared resources)
- Rapid elasticity (easy scaling up/down)
- Measured service (pay for what you use)

*Example:* Using Google Drive or AWS instead of your own server.

---

## Cloud Service Models

### 1. Software as a Service (SaaS)
- Provider gives ready-to-use applications.
- User only uses the software.

*Example:* Gmail, Microsoft 365

---

### 2. Platform as a Service (PaaS)
- Provider gives platform and tools.
- User deploys own applications.

*Example:* Google App Engine, Heroku

---

### 3. Infrastructure as a Service (IaaS)
- Provider gives servers, storage, networks.
- User controls OS and applications.

*Example:* AWS EC2, Microsoft Azure VM

---

## Cloud Deployment Models

- **Private Cloud** – used by one organization only
- **Community Cloud** – shared by similar organizations
- **Public Cloud** – available to general public
- **Hybrid Cloud** – combination of different clouds

---

## Cloud Migration Risk Analysis
Before moving to cloud:
1. Identify assets
2. Find vulnerabilities
3. Estimate attack likelihood
4. Calculate potential loss
5. Choose security controls
6. Estimate cost savings

---

## Cloud Provider Security Assessment
Check if provider offers:
- Authentication & access control
- Encryption options
- Audit logs
- Incident response support
- High reliability & uptime

**Security standards:**  
- FedRAMP  
- PCI DSS  
- CSA STAR  

---

## Switching Cloud Providers
- Difficult and expensive
- SaaS is hardest to migrate
- IaaS is easiest to migrate
- Always plan backup and exit strategy

---

## Security Benefits of Cloud
- **Geographic diversity** – data stored in multiple locations
- **Infrastructure diversity** – reduces single point of failure

*Example:* Natural disaster in one region doesn’t destroy all data.

---

## Cloud-Based Security Services
Some security tasks handled by cloud providers:
- Email filtering
- DDoS protection
- Network monitoring
- Incident response

---

## Cloud Storage Security
- Some providers store data unencrypted
- Better security uses **per-user encryption keys**
- **Trust No One (TNO)** model:
  - Even provider cannot decrypt data

*Example:* Zero-knowledge encryption services.

---

## Data Loss Prevention (DLP) in Cloud
Harder than on-premise because of less control.

Common methods:
- Force access via VPN
- Install DLP agents on user devices
- Use DLP proxy in IaaS environments

---

## Cloud Application Security Risks

### 1. Shared Resource Attacks
- Multiple users share same infrastructure
- Vulnerability can affect others

*Example:* Side-channel attacks.

---

### 2. Insecure APIs
- Weak or broken APIs cause breaches
- Large number of cloud incidents happen due to API flaws

---

## Federated Identity Management (FIdM)
Allows **single identity to access multiple services**.

Benefits:
- Centralized user management
- Easier access revocation
- Stronger security

---

## Identity Standards

### SAML
- Authentication standard
- Used for enterprise cloud access
- When employee leaves, access is automatically removed

---

### OAuth
- Authorization standard
- Allows apps limited access without sharing passwords

*Example:* App accessing your photos with permission.

---

### OpenID Connect (OIDC)
- Authentication built on OAuth
- Better for mobile and native apps
- Uses identity tokens

---

## Securing IaaS Environments

Best practices:
- Encrypt storage volumes
- Encrypt network traffic
- Use two-factor authentication
- Avoid shared accounts
- Apply least privilege
- Prefer OAuth over passwords
- Use federated identity management

---

## Summary
- Cloud offers flexibility but adds new security risks
- Security depends on service and deployment model
- Encryption and identity management are critical
- APIs and shared resources are major attack points
- Proper planning and assessment are essential



# System Security – Presentation 9  
## Privacy (Short & Simple Notes)

---

## What is Privacy?
Privacy is the **right to control who knows information about you**, your communication, and your activities.

**Examples of private data:**
- Identity (name, ID number)
- Financial data (bank account, credit card)
- Health records
- Biometrics (fingerprint, face)
- Location data
- Private communications (emails, messages)

**Key roles:**
- **Subject** – person described by the data  
- **Owner** – person or organization that holds the data  

---

## Computer-Related Privacy Problems

### 1. Data Collection
Modern computers can store **huge amounts of personal data** easily.

*Example:* Companies collecting user behavior data.

---

### 2. Notice and Consent
Users should be informed and give permission before data is collected.

**Problem:**  
Today, users often **don’t know what data is collected** or how it is used.

---

### 3. Control and Ownership of Data
Once data is shared:
- User often loses control
- Data may be stored forever
- Data may be shared with others

---

## Fair Information Practices (Privacy Principles)

Key principles:
- Data must be collected **lawfully and fairly**
- Data should be **accurate and up to date**
- Purpose of data use must be clear
- Data should be destroyed if no longer needed
- Data must not be reused without consent
- Data must be protected from misuse
- Users have the right to **access and correct their data**
- Organizations must be **accountable**

---

## Privacy Laws

### U.S. Privacy Laws
- **Privacy Act (1974)** – applies to U.S. government data
- **HIPAA** – health data
- **GLBA** – financial data
- **COPPA** – children’s online data
- **FERPA** – student records

➡ State privacy laws vary widely.

---

### Non-U.S. Privacy Laws
- **European Privacy Directive (1995)**
  - Strong protection for personal data
  - Limits data transfer
  - Independent oversight

---

## Privacy-Preserving Data Mining
Removing names alone is **not enough**.

### Problem
People can still be identified using remaining data.

### Solution: Data Perturbation
- Add small changes to data
- Keeps statistics useful
- Reduces privacy risk

*Example:* Slightly changing ages in a dataset.

---

## Privacy Precautions for Web Surfing

### Cookies
- Small files stored on your device
- Track preferences and behavior
- Can store sensitive data

---

### Third-Party Tracking Cookies
- Used by advertisers
- Track users across many websites
- Used for targeted ads

---

### Web Bugs
- Invisible trackers
- Immediately send user activity data
- More active than cookies

---

## Spyware

Spyware secretly collects user data.

### Types of Spyware:
- **General spyware** – tracks behavior, identity theft
- **Hijackers** – modify system or apps
- **Adware** – shows unwanted ads

*Example:* Pop-up ads installed with free software.

---

## Email Privacy

### How Email Travels
Email passes through **multiple servers** before delivery.

➡ Any server can read or store the message.

---

### Anonymous & Disappearing Email
- **Disposable email** – temporary addresses
- **Remailers** – hide sender identity
- **Multiple remailers** – stronger anonymity

**Disappearing email is NOT guaranteed**  
Recipients can still save messages.

---

## RFID (Radio Frequency Identification)

### What is RFID?
- Small wireless tags
- Respond with unique ID when scanned

### Privacy Concerns
- Can track people’s movements
- Can reveal personal habits

*Example:* Tracking items in stores.

---

## Privacy Issues in Emerging Technologies

### Electronic Voting
- Must protect who voted and how they voted

---

### VoIP (Internet Calls)
- Can be encrypted
- Allows tracking of call sources and destinations

---

### Cloud Computing
- Data stored in multiple locations
- Different countries have different laws
- Providers may be forced to inspect data

---

## Summary
- Privacy means control over personal data
- Laws differ by country
- Cookies and web bugs track users
- Spyware secretly collects data
- Email has weak privacy by default
- New technologies create new privacy risks

# System Security – Presentation 11  
## Legal Issues & Ethics (Short & Simple Notes)

---

## Why Legal Issues & Ethics Matter in Security
System security is not only technical — it also involves **laws, rights, responsibilities, and moral decisions**.

➡ Something can be **legal but unethical**, or **ethical but illegal**.

---

## Protecting Programs & Data (Intellectual Property)

### 1. Copyright
- Protects the **expression of ideas**, not ideas themselves
- Gives the author exclusive rights to copy and sell
- Software code can be copyrighted

**Examples:**
- You can't copy software code without permission
- Algorithms themselves are NOT protected, only the written code

**Fair use allows:**
- Education
- Research
- Criticism

---

### 2. Patents
- Protect **inventions and novel ideas**
- Must be:
  - New
  - Non-obvious
- Software patents are allowed in many countries

**Example:**
- A new encryption algorithm can be patented

⚠ Patent holders must actively defend their patents

---

### 3. Trade Secrets
- Information that gives business advantage
- Must be kept secret to stay protected

**Examples:**
- Proprietary algorithms
- Internal business logic

⚠ Reverse engineering is usually legal  
⚠ Trade secrets do NOT protect against piracy

---

## Comparing Protection Methods (Very Short)
- **Copyright** → protects code text  
- **Patent** → protects invention/idea  
- **Trade secret** → protects confidential knowledge  

---

## Special Nature of Information
Unlike physical goods, information:
- Is not depleted when used
- Can be copied easily
- Has low reproduction cost
- Often loses value over time
- Is transferred digitally

➡ This makes legal protection harder.

---

## Employees & Employers Rights

### Ownership Rules
- Employer often owns:
  - Software created as part of job
  - Patents made using company resources

### Licenses
- Programmer may grant limited usage rights
- Conditions can include:
  - Time
  - Number of users
  - Number of systems

### Trade Secrets
- Usually belong to employer
- Disputes arise if work was done at home

---

## Reporting Software Vulnerabilities
**Responsible Disclosure Model:**
1. Report vulnerability privately
2. Vendor confirms issue
3. Vendor informs users (≈30 days)
4. Quiet period to install patches
5. Public disclosure after agreement
6. Researcher gets credit

➡ Prevents harm while fixing issues.

---

## Computer Crime

### What is Considered a Crime?
- Unauthorized access
- Data theft
- Privacy violation
- System damage
- Computer fraud

### Challenges in Prosecuting Cybercrime
- Hard to explain to courts
- Little physical evidence
- Complex technical details
- Victims may avoid publicity

---

## Evidence & Chain of Custody
- Digital evidence must be:
  - Authentic
  - Untampered
- Chain of custody tracks who accessed evidence

---

## Examples of Computer Laws

### U.S. Laws
- **Computer Fraud and Abuse Act** – hacking, unauthorized access
- **HIPAA** – medical data privacy
- **GLBA** – financial data protection
- **CAN-SPAM Act** – email spam rules
- **Privacy Act** – government data protection
- **USA PATRIOT Act** – expanded surveillance powers

---

### International Laws
- **EU Data Protection Act (GDPR)** – strong privacy rights
- **Council of Europe Cybercrime Convention** – cross-border cybercrime cooperation

---

## Law vs Ethics

| Law | Ethics |
|----|------|
| Mandatory | Voluntary |
| Written rules | Moral principles |
| Punishable | Judged by conscience |
| Clear boundaries | Often unclear |

---

## Ethical Decision-Making Steps
1. Understand the situation
2. Identify ethical principles
3. Compare conflicting values
4. Decide what is right
5. Defend the decision

---

## Common Ethical Theories (Simple)

- **Utilitarianism** – greatest good for most people
- **Duty-based ethics** – follow rules and obligations
- **Rights-based ethics** – respect individual rights

---

## Common Ethical Situations (Examples)

### Use of Company Resources
- Using company systems for personal work  
➡ Ethical? Depends on company policy.

---

### Privacy Rights
- Accessing personal data without permission  
➡ Usually unethical and illegal.

---

### Denial of Service
- Causing system failure knowingly  
➡ Unethical even if accidental at first.

---

### Software Ownership
- Selling tools built at home but used at work  
➡ Ownership can be disputed.

---

### Fraud
- Writing software that allows hidden financial changes  
➡ Ethical duty to refuse or report.

---

### Data Accuracy
- Manipulating statistics to please sponsors  
➡ Unethical.

---

### Hacking Ethics
- Testing systems without permission  
➡ Even with good intent, often unethical/illegal.

---

## Summary
- Laws protect software, data, and privacy
- Ethics guide decisions beyond the law
- Employees and employers often dispute ownership
- Responsible disclosure protects users
- Ethical issues rarely have simple answers


# System Security – Presentation 12  
## Cryptography (Short & Simple Notes)

---

## What is Cryptography?
Cryptography is the **science of protecting information** by converting readable data (**plaintext**) into unreadable form (**ciphertext**) so that only authorized users can read it.

**Goal:**  
- Confidentiality  
- Integrity  
- Authentication  
- Non-repudiation  

---

## Basic Cryptography Terms
- **Plaintext** – original readable message  
- **Ciphertext** – encrypted message  
- **Encryption** – converting plaintext to ciphertext  
- **Decryption** – converting ciphertext back to plaintext  
- **Key** – secret value used in encryption/decryption  

---

## Cryptographic Primitives (Building Blocks)

### 1. Substitution
- Replace one bit/character with another  
- Example: `A → X`

---

### 2. Transposition
- Rearrange order of characters  
- Example: `HELLO → OLLEH`

---

### 3. Confusion
- Complex relationship between key and ciphertext  
- Small change in key → big change in output

---

### 4. Diffusion
- Spread effect of one character across entire ciphertext  
- Small change in plaintext → many changes in ciphertext

---

## Cryptanalysis (Breaking Encryption)

### Goals of an Attacker
- Break a single message
- Discover the encryption key
- Find weaknesses in algorithm or implementation
- Infer information from message size or patterns

---

### Types of Cryptanalysis Inputs
- **Ciphertext-only** – attacker sees only encrypted data  
- **Known plaintext** – attacker knows some plaintext  
- **Chosen plaintext** – attacker chooses input to encrypt  

---

## One-Time Pad (OTP)
- Uses a **random key as long as the message**
- Each key is used only once

✅ Perfectly secure  
❌ Hard to manage keys in practice

---

## Properties of a Good Cryptosystem
- Based on strong mathematics
- Publicly analyzed and tested
- Secure even if algorithm is known
- Long-term resistance to attacks

---

## Symmetric Encryption

### Characteristics
- Same key for encryption and decryption
- Fast and efficient
- Key must be shared securely

---

### DES (Data Encryption Standard)
- Uses 56-bit key
- Operates on 64-bit blocks
- Now **considered insecure**

Used today mainly for learning concepts.

---

### Chaining (Why It's Needed)
Problem:
- Identical plaintext blocks → identical ciphertext blocks

Solution:
- Make each block depend on previous block

---

### Initialization Vector (IV)
- Random value added to first block
- Prevents predictable patterns

---

### AES (Advanced Encryption Standard)
- Modern symmetric standard
- Key sizes: 128, 192, 256 bits
- Strong, fast, widely used

**Example uses:**
- Disk encryption
- VPNs
- Secure web traffic

---

## Asymmetric Encryption (Public-Key)

### Characteristics
- Uses two keys:
  - **Public key** – shared
  - **Private key** – secret
- Slower than symmetric encryption
- Solves key distribution problem

---

### RSA Algorithm
- Based on difficulty of factoring large prime numbers
- Two keys:
  - Public key `(e, n)`
  - Private key `(d, n)`

**Used for:**
- Secure key exchange
- Digital signatures

---

## Message Digests (Hash Functions)

### What is a Hash?
- Converts data into fixed-size output (digest)
- One-way function

### Properties
- Cannot reverse digest to original data
- Very hard to find two inputs with same digest

**Uses:**
- Integrity checking
- Password storage
- Authentication

---

## Digital Signatures

### Purpose
- Prove message authenticity
- Ensure message integrity
- Prevent denial by sender

---

### Requirements
- Unforgeable
- Authentic
- Not alterable
- Not reusable

---

### How It Works (Simple)
1. Sender hashes message
2. Hash encrypted using sender’s **private key**
3. Receiver verifies using sender’s **public key**

---

## Elliptic Curve Cryptography (ECC)
- Alternative to RSA
- Same security with **smaller key size**
- Faster and efficient

**Used in:**
- Mobile devices
- Modern secure protocols

---

## Quantum Cryptography
- Based on physics, not math
- Uses photons and quantum properties
- Detects eavesdropping automatically

⚠ Still experimental  
🚀 Very promising for future security

---

## Summary
- Cryptography protects data confidentiality and integrity
- AES is the modern symmetric standard
- RSA and ECC are popular asymmetric systems
- Hash functions ensure integrity
- Digital signatures prove authenticity
- Quantum cryptography may define future security




Learn all about this source and genearate me audio  podcast about this. This podcast must help me to understand this topics and leand and memorize