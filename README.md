# Industrial Programming Lab

## About

This repository documents my structured learning journey through the **Logic Building with Industrial Project Development** programming batch.

The goal of this lab is to transition from fundamental algorithmic thinking to low-level systems programming and modern industrial software architecture. Every program in this repository is written by hand to build genuine muscle memory and a deep conceptual understanding.

---

## Learning Philosophy

The learning progression follows a strict engineering hierarchy:

$$\text{Concept} \longrightarrow \text{Implementation} \longrightarrow \text{Practice} \longrightarrow \text{Design} \longrightarrow \text{Industrial Application}$$

1. **Concept**: Understand the underlying theory, memory layout, and computational model.
2. **Implementation**: Build from scratch without relying on high-level abstractions prematurely.
3. **Practice**: Solidify problem-solving patterns through repetitive drill and variation.
4. **Design**: Model clean, modular, and maintainable systems using OOP and design principles.
5. **Industrial Application**: Apply patterns and systems knowledge to real-world software components.

---

## Repository Structure

The repository is organized by core computer science concepts rather than by programming language:

```
industrial-programming-lab/
├── 01-logic-building/
├── 02-arrays-and-matrices/
├── 03-strings/
├── 04-bit-manipulation/
├── 05-memory-management/
├── 06-structures-and-generic-programming/
├── 07-recursion/
├── 08-data-structure-implementation/
├── 09-searching-and-sorting/
├── 10-core-java/
├── 11-java-collections/
├── 12-file-and-system-programming/
├── 13-network-programming/
├── 14-multithreading/
├── 15-object-oriented-design/
├── 16-design-patterns-and-lld/
├── daily-inbox/
├── README.md
├── PROGRESS.md
└── ROADMAP.md
```

### Module Descriptions

1. **`01-logic-building/`**: Fundamental algorithmic logic, conditional decisions (if/else, switch), iterative constructs (loops, nested loops), mathematical algorithms, and basic problem decomposition.
2. **`02-arrays-and-matrices/`**: 1D, 2D, and multi-dimensional array operations, traversals, in-place modifications, matrix arithmetic, and transformations.
3. **`03-strings/`**: Character arrays, C strings, Java Strings, string parsing, tokenization, pattern matching, and manipulation algorithms.
4. **`04-bit-manipulation/`**: Low-level bitwise operations (`AND`, `OR`, `XOR`, `NOT`, bit shifts), bit masks, setting/clearing/toggling bits, and binary arithmetic logic.
5. **`05-memory-management/`**: Low-level memory architecture, pointer arithmetic, double pointers, dynamic memory allocation (`malloc`, `calloc`, `realloc`, `free`), and memory safety.
6. **`06-structures-and-generic-programming/`**: C structs, unions, structure pointers, `typedef`, function pointers, and C++ template functions/classes for generic programming.
7. **`07-recursion/`**: Recursive problem formulation, base and recursive cases, stack unwinding, recursion tree analysis, and foundational backtracking.
8. **`08-data-structure-implementation/`**: Ground-up implementations of data structures (singly/doubly/circular linked lists, stacks, queues, deques, trees, BSTs).
9. **`09-searching-and-sorting/`**: Implementation of search algorithms (linear, binary) and sorting algorithms (bubble, selection, insertion, merge, quick, counting sort).
10. **`10-core-java/`**: Java language fundamentals, classes, objects, constructors, encapsulation, packages, access modifiers, inheritance, interfaces, abstract classes, and exception handling.
11. **`11-java-collections/`**: Deep dive into the Java Collections Framework (ArrayList, LinkedList, HashMap, HashSet, TreeMap, TreeSet, PriorityQueue, Deque, Iterator, Comparable/Comparator).
12. **`12-file-and-system-programming/`**: File streams, binary I/O, serialization, system calls, command-line utilities, virtual file systems, and operating system interfaces.
13. **`13-network-programming/`**: Sockets, TCP/UDP client-server architectures, protocols, I/O multiplexing, and network communication APIs.
14. **`14-multithreading/`**: Concurrency, threads, `Runnable`, synchronization primitives, mutual exclusion, locks, inter-thread communication, thread pools, and the Executor framework.
15. **`15-object-oriented-design/`**: Object-oriented principles in depth—class responsibilities, abstraction, encapsulation, polymorphism, composition over inheritance, and SOLID principles.
16. **`16-design-patterns-and-lld/`**: Gang of Four (GoF) design patterns (Creational, Structural, Behavioral), Low-Level Design (LLD) case studies, and scalable system modeling.

---

## Technology Coverage

- **Languages**: C, C++, Java
- **Core Domains**:
  - Programming Fundamentals & Algorithmic Logic
  - Low-Level Memory Management & Pointer Arithmetic
  - Custom Data Structure & Algorithm Implementations
  - Core Java & Java Collections Framework
  - File I/O & System-Level Programming
  - Network Socket Programming & Protocols
  - Multithreading & Concurrent Execution
  - Object-Oriented Analysis & Design (OOAD)
  - Design Patterns & Low-Level Design (LLD)

---

## Daily Workflow

This repository uses an automated staging and organization pipeline to maintain high documentation standards while keeping focus on coding:

1. **Code Manually**: Write and test programs locally.
2. **Save in Inbox**: Save raw program files into `daily-inbox/` (e.g., `Program1.c`, `Program2.java`).
3. **Trigger Organization**: Tell Antigravity:
   > *"Organize today's programs."*
4. **Automated Classification**: Programs are analyzed to identify the primary conceptual focus, independent of superficial keywords.
5. **Standardized Renaming & Moving**: Files are renamed to descriptive, kebab-cased names (`NN-descriptive-name.ext`) and moved to the appropriate module and language folder.
6. **Progress Tracking**: [PROGRESS.md](file:///home/atharv/industrial-programming-lab/PROGRESS.md) is automatically updated with accurate program counts.
7. **Conventional Commits**: Changes are committed following Conventional Commit standards (`feat(...)`, `docs(...)`, `chore(...)`).

---

## Projects

Full-scale industrial projects are maintained in separate dedicated repositories to keep this lab focused on modular learning exercises. Projects will be linked below as their standalone repositories are published:

- **Custom Virtual File System** *(To be linked upon creation)*
- **Parking Lot Automation System** *(To be linked upon creation)*
- **Study Tracker** *(To be linked upon creation)*
- **Agrihort Connect** *(To be linked upon creation)*

---

## Repository Relationship

To keep repositories focused and prevent unnecessary duplication:

| Repository | Primary Purpose | Scope & Content |
|---|---|---|
| **`Conceptual_Programs`** | Language Fundamentals & General Practice | General C, C++, and Java practice, basic programming concepts, older conceptual exercises. |
| **`DSA`** | Interview Preparation & Problem Solving | Interview-focused problem solving from LeetCode, GeeksForGeeks, and InterviewBit; competitive programming algorithms. |
| **`industrial-programming-lab`** *(This repo)* | Batch Learning & Industrial Progression | Structured curriculum from logic building to systems programming, low-level memory, core Java, concurrent systems, OOP, and LLD. |
