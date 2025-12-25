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
