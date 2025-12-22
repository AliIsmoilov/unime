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
