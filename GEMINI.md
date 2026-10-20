# Project Instructions & Permanent Git Policy

> **Repository:** `industrial-programming-lab`  
> **Workspace Root:** `/home/atharv/industrial-programming-lab`  
> **Target Audience:** Atharv Mahadik / Antigravity AI Assistant

---

## 1. Repository Purpose & Architecture

This repository maintains a structured, industrial-grade progression through foundational and advanced computer science and software engineering implementations:
- `01-logic-building` through `16-design-patterns-and-lld`
- `daily-inbox/` for staging raw daily programming exercises

**Primary Objective:** The Git commit history and directory structure must clearly communicate what was learned and implemented. Any reviewer inspecting the repository must understand the actual programming concepts, progression, and changes without opening every file.

### A. Mandatory Concept-First Architecture
The primary classification criterion is the program's **actual learning objective, NOT its programming language**.
C, C++, and Java implementations of the same topic live together under that conceptual topic directory, separated only by language subfolders (`c/`, `cpp/`, `java/`):

```text
industrial-programming-lab/
├── 01-logic-building/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 02-arrays-and-matrices/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 03-strings/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 04-bit-manipulation/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 05-memory-management/
│   ├── c/
│   └── cpp/
├── 06-structures-and-generic-programming/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 07-recursion/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 08-data-structure-implementation/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 09-searching-and-sorting/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 10-core-java/
│   └── java/
├── 11-java-collections/
│   └── java/
├── 12-file-and-system-programming/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 13-network-programming/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 14-multithreading/
│   ├── c/
│   ├── cpp/
│   └── java/
├── 15-object-oriented-design/
│   └── java/
├── 16-design-patterns-and-lld/
│   └── java/
├── daily-inbox/
├── README.md
├── PROGRESS.md
└── ROADMAP.md
```

Language subfolders are created when needed; empty folders are not added unnecessarily. Existing repository files that remain relevant are preserved.

### B. CRITICAL RULE: Never Classify Every Java Program as Core Java
The `10-core-java/java/` directory is **exclusively** for programs whose primary learning objective is a Core Java language feature or runtime concept:
- Primitive types, type conversion, lossy conversion, and Java operators.
- Classes, objects, constructors, access modifiers, method overloading, packages, and OOP fundamentals in Java.
- Java-specific exception handling architecture (`try-catch-finally`, custom exceptions).
- Basic console I/O using `Scanner` and stream mechanics when studied as Java language features.

**When a Java program's primary objective is algorithmic or conceptual, it MUST go to the corresponding concept directory:**

| Program's Primary Objective | Correct Destination |
|---|---|
| Addition, number problems, conditionals, or basic loops | `01-logic-building/java/` |
| Array traversal, manipulation, or 2D matrix algorithms | `02-arrays-and-matrices/java/` |
| String reversal, parsing, or string manipulation algorithms | `03-strings/java/` |
| Bitwise masks, bit inspection, or bit toggling | `04-bit-manipulation/java/` |
| Generic classes, generic interfaces, or generic methods | `06-structures-and-generic-programming/java/` |
| Recursion exercises & call stack mechanics | `07-recursion/java/` |
| Linked-list, stack, queue, or tree implementations | `08-data-structure-implementation/java/` |
| Binary search or sorting algorithms | `09-searching-and-sorting/java/` |
| Core Java language features, OOP fundamentals, exceptions | `10-core-java/java/` |
| Java ArrayList, HashMap, HashSet, Collections Framework | `11-java-collections/java/` |
| Java file I/O, file packing/unpacking, serialization | `12-file-and-system-programming/java/` |
| Java socket programming, client-server networking | `13-network-programming/java/` |
| Java threads, Runnable, synchronization, locks | `14-multithreading/java/` |
| OOP domain modeling, class decomposition, responsibilities | `15-object-oriented-design/java/` |
| Design patterns (GoF) and Low-Level Design (LLD) systems | `16-design-patterns-and-lld/java/` |

**Decision Rule:** First determine what the program teaches. Then select the concept directory. Finally select the language subfolder. A Java program does not belong in Core Java merely because it uses Java syntax.

---

## 2. Daily Inbox & Organization Workflow Rules

1. **Structural Reference Only:** The `pranavd0/industrial-programming-lab` repository serves strictly as an organizational and structural reference. Never copy or import its source programs.
2. **Absolute Prohibition on Archive Imports:** The external 1,000-program reference archive is for personal reference and learning only. Never extract, copy, migrate, import, or commit programs from that archive into this repository.
3. **Daily Intake Scope:** Future organization applies strictly to Atharva's own newly written programs dropped into `daily-inbox/`. Never scan outside archives to find extra programs to add.
4. **Classification & Placement:**
   - Inspect newly supplied code to identify the true conceptual focus of each program.
   - Introductory Java exercises (arithmetic, conditionals, loops, console I/O) belong in `01-logic-building/java/`.
   - Move files into their corresponding concept module and language subfolder (`c/`, `cpp/`, `java/`).
5. **Naming & Source Preservation:**
   - **For C/C++ tracks:** Follow C/C++ Naming Rules (Section 3.A).
   - **For Java tracks:** Follow Java Naming & Strict Code Preservation Rules (Section 3.B).
   - Preserve all program logic, variable names, comments, whitespace, and formatting byte-for-byte.
6. **Progress Tracking:** Update `PROGRESS.md` with accurate verified program counts. Never inflate numbers.
7. **CRITICAL WORKFLOW BOUNDARY:**
   - Organizing, moving, or renaming files **DOES NOT** authorize committing or pushing.
   - Staging, committing, and pushing require explicit user request or confirmation.
   - Ambiguous cases must be reported for user review instead of guessed.

---

## 3. Naming Rules & Strict Source-Code Preservation

### A. C and C++ Naming Rules
- Use lowercase, descriptive, hyphen-separated filenames with sequence numbers (`NN-descriptive-name.ext`).
- *Examples:* `01-display-message.c`, `02-addition-with-input.c`, `03-array-traversal.cpp`.
- Follow category-specific numbering progression. **Never renumber existing committed files automatically.**

### B. Java Naming Rules & Strict Code Preservation
- **No leading numbers or unnecessary numeric suffixes:** Do not use leading numbers (e.g., `01-`, `02-`) or unnecessary numeric suffixes in Java filenames.
- **Descriptive PascalCase:** Use specific, meaningful PascalCase filenames that describe the program's purpose.
  - *Examples:* `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
- **Avoid generic names:** Never use generic names such as `Program1.java`, `Example2.java`, or `Test3.java`.
- **Top-level class matching:** Ensure that the top-level class identifier matches the filename exactly.
- **Strict Source-Code Preservation:**
  - Antigravity is authorized **only** to:
    1. Rename the Java source file.
    2. Rename the corresponding class identifier when necessary to match the new filename.
    3. Update constructor names or direct references that must change solely because of that class rename.
  - Antigravity is **NOT authorized** to make any other code changes:
    - Do **not** add, remove, or modify `public`, `private`, `protected`, `static`, or any other keyword.
    - Do **not** change the `main` method signature.
    - Do **not** fix syntax errors, compilation errors, bugs, or warnings.
    - Do **not** change logic, algorithms, variables, data types, conditions, loops, or method implementations.
    - Do **not** reformat code, change indentation, or modify whitespace.
    - Do **not** add, remove, or rewrite comments.
    - Do **not** add imports, remove imports, or change package declarations.
    - Do **not** optimize code or apply coding standards automatically.
    - Do **not** modify code merely to make it compile.
  - Before and after every rename, compare original and final source code to verify that only authorized class-name changes occurred.

---

## 4. Permanent Git Commit Convention & Type Selection

### A. Mandatory Commit Type Selection
**Never default every commit to `feat`.** Inspect the actual code changes and select the most appropriate commit type according to the explicit definitions below:

#### `feat` — New Concepts and Implementations
Use **strictly** when introducing a brand-new algorithm, data structure, or language capability that has not previously been implemented in the relevant module.
- *Examples:*
  - `feat(bit-manipulation): implement fourth-bit inspection using bitwise mask`
  - `feat(trees): implement binary search tree node insertion`
  - `feat(arrays): implement array rotation using reversal algorithm`

#### `refactor` — Architectural Evolutions
Use when restructuring or evolving an existing solution without introducing a new problem statement or genuinely new core concept.
- *Examples:*
  - `refactor(arithmetic): extract inline addition into a helper function`
  - `refactor(java-oop): migrate static arithmetic methods into an instantiated object`

#### `test` — Testing and Verification
Use when adding test cases, assertion drivers, boundary-testing matrices, or test harnesses.
- *Examples:*
  - `test(arithmetic): add assertion cases for boundary values`
  - `test(modular-addition): add automated unit test harness using assert`

#### `fix` — Error and Flaw Corrections
Use when correcting an actual bug or demonstrating the correction of an intentional logical flaw.
- *Examples:*
  - `fix(conditionals): correct logical operator flaw in three-number maximum`
  - `fix(arrays): correct off-by-one error in array traversal`

#### `docs` — Documentation Only
Use when changes are limited strictly to repository documentation (`README.md`, `PROGRESS.md`, `ROADMAP.md`).
- *Examples:*
  - `docs(progress): update completed program count`
  - `docs(readme): clarify repository structure`

#### `chore` — Maintenance and Housekeeping
Use for repository organization and maintenance that does not introduce a new implementation or change program behavior.
- *Examples:*
  - `chore(organization): reclassify input buffer programs`
  - `chore(organization): organize daily programs into concept folders`
  - `chore(config): update repository instructions`

---

### B. Decision Rules for Mixed Changes
1. **Inspect Diffs First:** Inspect every relevant diff (`git diff`, `git diff --cached`) before selecting commit types.
2. **Logical Grouping:** Group changes into logically coherent commits by concept and type.
3. **Separate by Concept/Type:** Use separate commits when changes represent meaningfully different types or concepts.
4. **No Forced Consolidation:** Never force unrelated changes into one commit simply to reduce commit count.
5. **No File-by-File Default:** Never create one commit per file by default.
6. **Consult on Ambiguity:** If no listed type accurately describes a change, ask the user before inventing a new convention.

---

### C. Scope and Description Standards

Format:
```text
<type>(<scope>): <specific description>
```

#### Scopes
Choose a scope that accurately identifies the concept or area changed:
- `arithmetic`, `arrays`, `strings`, `bit-manipulation`, `memory`, `conditionals`
- `functions`, `recursion`, `structures`, `pointers`, `searching`, `sorting`
- `trees`, `java-oop`, `collections`, `threads`, `network`, `lld`
- `progress`, `organization`, `config`

#### Descriptions
- **Concise, specific, technically accurate:** Describe what the commit actually implements or changes.
- **Imperative mood & clear action verbs:** Use words like `implement`, `demonstrate`, `extract`, `correct`, `add`, `update`, `reclassify`.
- **Strictly Banned Vague Phrases:**
  - `add programs`, `update code`, `daily practice`, `add foundational problem solving`, `update logic building`, `add multiple files`.
  - Generic parent-folder echoes like `feat(logic-building): add foundational problem solving and addition programs`.
- **No repetitive messages:** Avoid repeating identical commit messages across different commits unless changes are genuinely equivalent.
- **Truthful claims:** Do not claim a bug was fixed or a test passed unless that is supported by the actual diff.

---

## 5. Existing Commit History Policy

- **Leave existing history intact:** Do not rewrite, squash, amend, or delete past commits automatically.
- **No force-pushes:** Do not run `git push --force` or modify remote history.
- Apply this policy forward to all future commits.

---

## 6. Safety, Staging, and Approval Protocols

- **Commit authorization:** Only create commits when the user explicitly requests or confirms a commit. Organizing, renaming, or moving files does not authorize committing.
- **Push authorization:** Only push (`git push`) when the user explicitly requests a push or authorizes a commit-and-push operation.
- **Inspect before staging:** Always inspect `git status` and diffs before staging.
- **Selective staging:** Stage only files belonging to the intended commit group (`git add <files>`).
- **Forbidden files:** NEVER stage or commit:
  - Secrets, tokens, credentials, or keys
  - Unrelated modifications
  - Build artifacts, compiled binaries (e.g., `myexe`, `*.o`, `*.out`, `*.class`)
  - IDE/editor settings (`.vscode/`, `.idea/`)
- **Preserve source code integrity:** Do not modify program logic just to create a cleaner commit. Adhere strictly to the source-code preservation rules in Section 3.
- **No destructive operations:** Never use `git reset --hard`, `git checkout .`, `git clean -fd`, or force-push without explicit user request.
- **Ask when uncertain:** If a program or change cannot be confidently classified, ask the user before creating its commit.
