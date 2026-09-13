This file combines the full oral-exam Q&A set covering:

- Software Process & Agile
- Software Engineering Principles
- Requirements Engineering
- Software Modeling
- UML
- Model-Driven Engineering
- Software Architecture
- Architectural Views, Styles & Patterns
- Software Testing

---

# 1. SOFTWARE PROCESS / AGILE

## Q1. What is a software process?

**Oral answer:**

> A software process is a structured set of activities used to develop and evolve a software system. The fundamental activities are specification, design and implementation, validation, and evolution.

Different methodologies organize these activities differently.

---

## Q2. What is Plan-Driven development?

**Oral answer:**

> Plan-driven development organizes development into planned stages, with the expected outputs of those stages defined largely in advance. It is appropriate when requirements are stable or when extensive documentation and regulation are important.

**Important:** Plan-driven does not necessarily mean Waterfall. Incremental plan-driven development is also possible.

---

## Q3. What is Agile development?

**Oral answer:**

> Agile is an iterative and incremental approach where specification, design, implementation and testing are interleaved. Working software is delivered frequently and requirements can evolve through customer feedback.

---

## Q4. Plan-Driven vs Agile?

**Oral answer:**

> The main difference is how much is planned in advance and how change is handled. Plan-driven separates and plans activities more formally. Agile interleaves activities and expects requirements to change.

**Easy memory:**

- Plan-Driven = predict and plan
- Agile = develop, feedback, adapt

---

## Q5. What are the four Agile Manifesto values?

1. Individuals and interactions over processes and tools
2. Working software over comprehensive documentation
3. Customer collaboration over contract negotiation
4. Responding to change over following a plan

**Important:** Agile does not say the items on the right have no value. It values the items on the left more.

---

## Q6. What is Scrum?

**Oral answer:**

> Scrum is an Agile framework for managing iterative and incremental development through fixed-length Sprints.

Know these concepts:

- Product Owner
- Scrum Master
- Team
- Product Backlog
- Sprint Backlog
- Sprint
- Review
- Retrospective

---

## Q7. Product Owner vs Scrum Master?

**Oral answer:**

> The Product Owner decides what should be built and prioritizes business value. The Scrum Master facilitates the process, removes impediments and helps the team work effectively.

---

## Q8. Product Backlog vs Sprint Backlog?

**Oral answer:**

> The Product Backlog contains all prioritized product work. The Sprint Backlog contains the selected work for the current Sprint.

---

## Q9. Sprint Review vs Retrospective?

**Oral answer:**

> Sprint Review focuses on the product and stakeholder feedback. Retrospective focuses on the development process and how the team can improve.

**Easy memory:**

- Review = PRODUCT
- Retrospective = PROCESS

---

# 2. SOFTWARE ENGINEERING PRINCIPLES

The seven key principles are:

1. Rigor and formality
2. Separation of concerns
3. Modularity
4. Abstraction
5. Anticipation of change
6. Generality
7. Incrementality

---

## Q10. What is rigor and formality?

**Oral answer:**

> Software development is creative, but it must also be systematic. Rigor means applying disciplined methods. Formality is the highest degree of rigor, where mathematical techniques can be used.

---

## Q11. What is separation of concerns?

**Oral answer:**

> Separation of concerns means dividing a complex problem into separate concerns so that we can concentrate on one issue at a time. It is essentially divide and conquer.

**Example:**

UI logic should not contain database logic.

---

## Q12. What is modularity?

**Oral answer:**

> Modularity means dividing a complex system into simpler modules with well-defined interfaces. We can understand or change one module while ignoring unnecessary details of the others.

---

## Q13. What are cohesion and coupling?

**Oral answer:**

> Cohesion describes how strongly the elements inside one module belong together. Coupling describes how strongly different modules depend on each other.

**Good design:**

**High Cohesion + Low Coupling**

Why?

- High cohesion makes a module focused and meaningful.
- Low coupling makes modules easier to change independently.

---

## Q14. What is abstraction?

**Oral answer:**

> Abstraction means focusing on the essential properties of something while hiding unnecessary implementation details.

**Example:**

A `PaymentService` interface tells us what payment operations exist without exposing all internal code.

---

## Q15. What is anticipation of change?

**Oral answer:**

> It means designing the system while considering likely future changes so that software can evolve without major redesign.

---

## Q16. What is generality?

**Oral answer:**

> Generality means recognizing whether a specific problem is an instance of a more general problem and creating a reusable solution when appropriate.

**Important:** Generality must be balanced against complexity, cost and performance.

---

## Q17. What is incrementality?

**Oral answer:**

> Incrementality means developing the system step by step, first delivering a smaller useful version and then adding more functionality.

---

## Q18. Principle vs Method vs Methodology vs Tool?

- **Principle** = general fundamental idea
- **Method** = systematic guideline for performing an activity
- **Technique** = more specific or mechanical way of doing something
- **Methodology** = organized collection of methods and techniques
- **Tool** = software or instrument supporting them

---

# 3. REQUIREMENTS ENGINEERING

## Q19. What is Requirements Engineering?

**Oral answer:**

> Requirements Engineering is the process of establishing the services customers require from a system and the constraints under which the system must operate and be developed.

---

## Q20. Functional vs Non-functional requirements?

**Oral answer:**

> Functional requirements describe what the system should do. Non-functional requirements describe system properties or constraints such as performance, security, reliability and usability.

**Important:** Non-functional requirements can affect the whole architecture, not just one function.

---

## Q21. User requirements vs System requirements?

**Oral answer:**

> User requirements are high-level and understandable by customers. System requirements are more detailed and precise specifications used by developers.

---

## Q22. What are domain requirements?

**Oral answer:**

> Domain requirements come from the environment in which the system operates and may introduce new functions, constraints or specific calculations.

Two common problems:

- **Understandability** — engineers may not understand domain terminology.
- **Implicitness** — experts may forget to state things they consider obvious.

---

## Q23. What is an SRS?

**Oral answer:**

> The Software Requirements Specification is the official statement of what the system is required to do. It describes user and system requirements.

**Important:**

> SRS = WHAT, not HOW.

It is not primarily a design document.

---

## Q24. What are completeness and consistency?

**Oral answer:**

> Completeness means all required facilities are described. Consistency means requirements do not contradict each other.

---

## Q25. What is requirements validation?

**Oral answer:**

> Requirements validation checks whether the documented requirements actually define the system the customer needs.

Know these checks:

- Validity
- Consistency
- Completeness
- Realism
- Verifiability

---

# 4. SOFTWARE MODELING

## Q26. What is system modeling?

**Oral answer:**

> System modeling is the process of developing abstract models of a system, with each model presenting a different view or perspective.

Why do we use models?

- To understand the system
- To communicate with stakeholders
- To reduce complexity

---

## Q27. What is a model?

**Oral answer:**

> A model is a simplified representation of a system created for a particular purpose or viewpoint.

**Useful analogy:**

- City = real system
- Map = model
- Map legend = modeling language/metamodel
- Different maps = different views

---

# 5. UML

## Q28. What is UML?

**Oral answer:**

> UML stands for Unified Modeling Language. It is an industry-standard graphical language used to specify, visualize and document software systems.

**Important:**

- UML is a language, not a methodology.
- UML is technology and programming-language independent.

---

## Q29. Why use UML?

**Oral answer:**

> Because natural language may be ambiguous and source code is too detailed. UML provides an abstract graphical view of a system that is easier to understand and communicate.

---

## Q30. What is a Use Case Diagram?

**Oral answer:**

> A Use Case Diagram shows external actors and the goals or services they obtain from the system.

**Main question it answers:**

> Who uses the system and what do they do?

Know:

- Actor
- Use case
- System boundary
- Association
- `<<include>>`
- `<<extend>>`

---

## Q31. `include` vs `extend`?

**Oral answer:**

> Include represents reused behavior that is part of another use case. Extend represents additional conditional or optional behavior.

**Easy memory:**

- Include = required/reused
- Extend = optional/conditional

---

## Q32. What is a Sequence Diagram?

**Oral answer:**

> A Sequence Diagram shows interactions between participants in chronological order. Lifelines represent participants and messages show communication. Time progresses from top to bottom.

**Main question:**

> Who calls whom, and in what order?

Know:

- Participant
- Lifeline
- Message
- Return message
- Activation bar
- `alt`
- `opt`
- `loop`

---

## Q33. What is an Activity Diagram?

**Oral answer:**

> An Activity Diagram represents a workflow. It shows actions, decisions, alternative paths and parallel activities.

**Main question:**

> What process happens step by step?

---

## Q34. Decision vs Merge?

Both usually use a diamond.

- **Decision:** one incoming flow → several alternative outgoing paths
- **Merge:** several alternative incoming paths → one outgoing path

---

## Q35. Fork vs Join?

Both usually use a thick bar.

- **Fork:** one flow → several parallel flows
- **Join:** several parallel flows → one synchronized flow

**Easy memory:**

- Decision/Merge = alternatives
- Fork/Join = parallelism

---

## Q36. What is a State Diagram?

**Oral answer:**

> A State Diagram shows the lifecycle of an object by representing its states and transitions triggered by events.

**Main question:**

> What state is the object currently in, and what event changes it?

---

## Q37. Activity vs State Diagram?

**Oral answer:**

> Activity Diagram focuses on workflow and actions. State Diagram focuses on the condition or lifecycle of an object.

---

## Q38. What is a Class Diagram?

**Oral answer:**

> A Class Diagram describes the static logical structure of the system: classes, attributes, operations and relationships.

Know:

- Association
- Multiplicity
- Inheritance / generalization
- Aggregation
- Composition

---

## Q39. Aggregation vs Composition?

**Oral answer:**

> Aggregation is a weak part-of relationship where the part can exist independently. Composition is strong ownership where the part has no meaningful lifecycle without the whole.

**Easy memory:**

- Aggregation = A uses/contains B weakly
- Composition = A owns B strongly

---

## Q40. What is multiplicity?

**Oral answer:**

> Multiplicity shows how many instances of one class may be associated with another.

Examples:

- `1`
- `0..1`
- `*`
- `1..*`

---

## Q41. What is a Component Diagram?

**Oral answer:**

> A Component Diagram shows implementation-level software components and their interfaces or dependencies.

**Important difference:**

- Class = logical abstraction
- Component = implementation entity

---

## Q42. What is a Deployment Diagram?

**Oral answer:**

> A Deployment Diagram shows the physical architecture: runtime nodes and where software components are deployed.

**Main question:**

> Where does the software run?

---

## Q43. Class vs Component vs Deployment?

**Oral answer:**

> Class Diagram shows logical software structure. Component Diagram shows implementation modules. Deployment Diagram shows the physical nodes where those modules execute.

---

# 6. MODEL-DRIVEN ENGINEERING

## Q44. What is MDE?

**Oral answer:**

> Model-Driven Engineering is an approach where models rather than programs are the principal development artifacts, and software may be generated through transformations of those models.

**Key idea:**

> Models + Transformations = Software

---

## Q45. Model-to-model vs Model-to-text transformation?

**Oral answer:**

> Model-to-model transforms one model into another model. Model-to-text transforms a model into textual artifacts such as source code.

---

## Q46. What is MDA?

**Oral answer:**

> Model-Driven Architecture is the OMG model-focused approach to design and implementation. It defines models at different abstraction levels.

---

## Q47. CIM, PIM, PSM?

- **CIM — Computation Independent Model:** business/domain requirements, no implementation details
- **PIM — Platform Independent Model:** structure and behavior without technology-specific details
- **PSM — Platform Specific Model:** adds concrete platform and technology details

**Memory:**

> CIM → PIM → PSM → Code

---

# 7. SOFTWARE ARCHITECTURE

## Q48. What is Software Architecture?

**Oral answer:**

> Software architecture is the structure or structures of a system, comprising software components, their externally visible properties and the relationships between them.

---

## Q49. What are externally visible properties?

**Oral answer:**

> They are properties other components can rely on, such as provided services, performance characteristics, fault handling and shared-resource usage.

---

## Q50. Why is architecture an abstraction?

**Oral answer:**

> Architecture suppresses internal details that do not affect how components use, interact with or relate to each other.

---

## Q51. Why is Software Architecture important?

**Oral answer:**

> Architecture allows stakeholders to discuss the system at a high level, allows non-functional properties to be considered early, records major design decisions and supports reuse.

Main reasons:

- Stakeholder communication
- Early system / NFR analysis
- Documentation of important decisions
- Reuse

---

## Q52. Architecture in the small vs architecture in the large?

**Oral answer:**

> Architecture in the small concerns decomposition of an individual program. Architecture in the large concerns enterprise systems composed of many programs or systems distributed across machines and organizations.

---

# 8. ARCHITECTURAL VIEWS

## Q53. Why do we need multiple architectural views?

**Oral answer:**

> Because one model cannot represent every concern clearly. Different views show logical structure, runtime behavior, development organization or physical deployment.

---

## Q54. What is the 4+1 View Model?

Know these views:

- **Logical view** — key abstractions/classes
- **Process view** — runtime interacting processes
- **Development view** — source/module organization
- **Physical view** — deployment/hardware
- **+1 Scenarios / Use Cases** — connect and validate the other views

---

# 9. ARCHITECTURAL STYLE / PATTERN

## Q55. Style vs Architectural Pattern vs Design Pattern?

**Oral answer:**

> Architectural Style describes the highest-level organization of a system. An Architectural Pattern is a reusable solution for recurring architectural organization problems. A Design Pattern solves a more localized design problem.

---

## Q56. What is Layered Architecture?

**Oral answer:**

> Layered architecture organizes the system into layers with separated responsibilities. Higher layers use services provided by lower layers.

Advantages:

- Separation of concerns
- Maintainability
- Replaceability
- Easier understanding
- Easier testing

---

## Q57. What is Client-Server architecture?

**Oral answer:**

> Clients request services from servers over a network. The server provides shared functionality or data to multiple clients.

Advantages can include:

- Distribution
- Centralized services
- Heterogeneous clients

Disadvantages can include:

- Network dependence
- Server bottlenecks
- More distributed-system complexity

---

## Q58. What is Pipe-and-Filter architecture?

**Oral answer:**

> The system is organized as independent transformations called filters, connected by pipes through which data flows.

Example:

> Compiler stages.

Advantages:

- Reuse
- Easy replacement
- Possible concurrent execution

Disadvantage:

> It is not ideal for highly interactive systems and may introduce format-conversion overhead.

---

## Q59. What is MVC?

**Oral answer:**

> MVC separates a system into Model, View and Controller. Model manages data and operations, View manages presentation, and Controller manages user interactions.

**Easy memory:**

- Model = data
- View = display
- Controller = interaction

---

# 10. SOFTWARE TESTING

## Q60. What is Software Testing?

**Oral answer:**

> Software testing is the process of executing software to determine whether it matches its specification and operates correctly in its intended environment.

---

## Q61. Verification vs Validation?

**Oral answer:**

> Verification asks: “Are we building the product right?” and checks the software against its specification. Validation asks: “Are we building the right product?” and checks whether it satisfies real customer needs.

**Easy memory:**

- Verification = specification
- Validation = customer need

---

## Q62. Validation testing vs Defect testing?

**Oral answer:**

> Validation testing demonstrates that the system works as expected. Defect testing deliberately tries to expose faults.

Interesting distinction:

- Successful validation test = expected behavior demonstrated
- Successful defect test = a defect is exposed

---

## Q63. Inspection vs Testing?

**Oral answer:**

> Inspection is static verification: we examine artifacts without executing the program. Testing is dynamic verification: we execute software with test data.

---

## Q64. Can testing prove there are no bugs?

**Oral answer:**

> No. Testing can reveal the presence of defects, but it cannot prove their complete absence.

---

## Q65. Unit, Component and System testing?

- **Unit testing** — individual function, method, class or small unit
- **Component testing** — integrated units and their interfaces
- **System testing** — the whole integrated system

**Easy memory:**

> small → group → whole

---

## Q66. What is regression testing?

**Oral answer:**

> Regression testing means rerunning previous tests after a change to check that previously working functionality has not been broken.

---

## Q67. Alpha vs Beta vs Acceptance testing?

- **Alpha testing** — users test with developers, usually at the developer site
- **Beta testing** — a pre-release system is given to users in realistic conditions
- **Acceptance testing** — the customer decides whether the system is acceptable for deployment

---

# HIGH-PRIORITY QUESTIONS TO MEMORIZE FIRST

If you have limited time, memorize these first:

1. What is a Software Process?
2. Plan-Driven vs Agile
3. Agile Manifesto
4. What is Scrum?
5. Scrum roles
6. Product Backlog vs Sprint Backlog
7. Sprint Review vs Retrospective
8. Seven Software Engineering Principles
9. Separation of Concerns
10. Modularity
11. High Cohesion / Low Coupling
12. What is Requirements Engineering?
13. Functional vs Non-functional requirements
14. User vs System requirements
15. What is System Modeling?
16. What is UML?
17. Use Case Diagram
18. Sequence Diagram
19. Activity Diagram
20. State Diagram
21. Class Diagram
22. Component Diagram
23. Deployment Diagram
24. Aggregation vs Composition
25. Activity vs State
26. Class vs Component vs Deployment
27. What is MDE?
28. CIM / PIM / PSM
29. What is Software Architecture?
30. Why is Architecture important?
31. 4+1 View Model
32. Layered Architecture
33. Client-Server Architecture
34. MVC
35. Verification vs Validation
36. Inspection vs Testing
37. Unit / Component / System testing
38. Regression Testing

---

# ULTRA-SHORT MEMORY MAP

## Software Process
Specification → Design/Implementation → Validation → Evolution

## Agile
Iterative + Incremental + Feedback + Change

## SE Principles
Rigor → Separation → Modularity → Abstraction → Change → Generality → Incrementality

## Requirements
User → System → Functional / Non-functional → Validation

## UML
- Use Case = who does what
- Activity = workflow
- Sequence = who calls whom
- State = lifecycle
- Class = logical structure
- Component = implementation modules
- Deployment = where it runs

## Architecture
Components + visible properties + relationships

## Good modular design
High Cohesion + Low Coupling

## 4+1
Logical + Process + Development + Physical + Scenarios

## Testing
Verification = product right  
Validation = right product
