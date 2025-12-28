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
