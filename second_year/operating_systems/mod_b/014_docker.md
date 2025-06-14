# 🐳 Docker Basics and Key Concepts

## 1. What is Docker?

Docker is a platform used to develop, ship, and run applications in isolated environments called **containers**. Containers allow developers to package an application with all of its dependencies and run it consistently across different environments.

---

## 2. What is a Docker Container?

A **Docker container** is a lightweight, standalone, and executable unit of software that includes everything needed to run a piece of software: the code, runtime, system tools, libraries, and settings.

---

## 3. What is a Docker Image?

A **Docker image** is a read-only template used to create containers. It contains the application and all the environment dependencies. Images are built from a Dockerfile and can be stored in container registries.

---

## 4. What is a Dockerfile?

A **Dockerfile** is a text file that contains a set of instructions for building a Docker image. It defines how the image is constructed, including what base image to use, which files to include, and how the application should run.

---

## 5. What is Docker Volume?

A **Docker volume** is a mechanism for persisting data generated by and used by Docker containers. Volumes are stored outside of the container lifecycle, allowing data to persist even when containers are deleted or recreated.

---

## 6. What is Docker Compose?

**Docker Compose** is a tool for defining and managing multi-container Docker applications. It uses a YAML file to define the services, networks, and volumes required by the application and can start everything with a single command.

---

## 7. What is Docker Hub?

**Docker Hub** is a cloud-based registry service where you can find and share container images. It is the default public registry used by Docker, similar to GitHub but for Docker images.

---

## 8. What is a Docker Registry?

A **Docker registry** is a storage and content delivery system that holds Docker images. It can be public (like Docker Hub) or private (self-hosted). Registries allow you to share your images with others.

---

## 9. What is a Docker Network?

A **Docker network** allows containers to communicate with each other. Docker automatically creates a default network, but you can also create custom networks for better isolation and control.

---

## 10. What is the difference between an Image and a Container?

- **Image**: Blueprint for creating containers. It's static and read-only.
- **Container**: Running instance of an image. It's dynamic and writable.

---

## 11. What is the Docker CLI?

The **Docker CLI** (Command-Line Interface) is the primary way to interact with Docker through the terminal using commands like `docker run`, `docker build`, and `docker ps`.

---

## 12. What is a Multi-stage Build?

A **multi-stage build** is a Dockerfile feature that allows you to use multiple `FROM` statements in one file to optimize image size and build performance. It's useful for separating build and production environments.

---


## 13. What is Kubernetes (in Docker context)?

**Kubernetes** is an open-source container orchestration platform. While not a Docker tool, it is often used with Docker containers to manage deployment, scaling, and operations of containerized applications.

---

## Summary Table

| Concept              | Description                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| Docker               | Platform for building and running containers                                |
| Container            | Lightweight isolated environment for running applications                   |
| Image                | Read-only template used to create containers                                |
| Dockerfile           | Script defining how to build a Docker image                                 |
| Volume               | Persistent storage for Docker containers                                    |
| Docker Compose       | Tool for defining and running multi-container apps                          |
| Docker Hub           | Public registry for Docker images                                           |
| Docker Registry      | Storage for Docker images (public or private)                               |
| Network              | Allows communication between containers                                     |
| Docker Daemon        | Background service managing Docker resources                                |
| Docker CLI           | Command-line interface to interact with Docker                              |
| Multi-stage Build    | Technique to optimize image creation                                        |
| Docker Swarm         | Docker's native container orchestration tool                                |
| Kubernetes           | Advanced container orchestration system                                     |

