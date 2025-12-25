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
