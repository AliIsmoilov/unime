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
