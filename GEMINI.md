# Project Instructions & Permanent Git Policy

> **Repository:** `industrial-programming-lab`  
> **Workspace Root:** `/home/atharv/industrial-programming-lab`  
> **Target Audience:** Atharv Mahadik / Antigravity AI Assistant

---

## 1. Repository Purpose & Architecture

This repository maintains a structured, industrial-grade progression through foundational and advanced computer science and software engineering implementations:
- `01-logic-building` through `16-design-patterns-and-lld`
- `daily-inbox/` for staging raw daily programming exercises

**Primary Objective:** The Git commit history must clearly communicate what was learned and implemented. Any reviewer inspecting the commit history must understand the actual programming concepts, progression, and changes without opening every file.

---

## 2. Daily Inbox & Organization Workflow

1. Raw code files are placed in `daily-inbox/` (e.g., `Program1.c`, `Program1.java`, etc.).
2. When the user requests: *"Organize today's programs"* (or similar):
   - Inspect the code to identify the true conceptual focus of each program.
   - **For C/C++ and procedural tracks:** Rename files to standardized, descriptive, kebab-case names with sequence numbers (`NN-descriptive-name.ext`).
   - **For Java tracks:** Follow the dedicated **Java Organization & Naming Rules** (Section 3).
   - Move files into their corresponding module and language directory.
   - Update `PROGRESS.md` with accurate program counts.
3. **CRITICAL WORKFLOW BOUNDARY:**
   - Organizing, renaming, or moving files **DOES NOT** authorize committing or pushing.
   - Staging, committing, and pushing require explicit user request or confirmation.

---

## 3. Java Organization & Naming Rules (Strict Code Preservation)

### A. Java Filename Convention
- **No leading numbers or unnecessary numeric suffixes:** Do not use leading numbers (e.g., `01-`, `02-`) or unnecessary numeric suffixes in Java filenames.
- **Descriptive PascalCase:** Use specific, meaningful PascalCase filenames that describe the program's purpose.
  - *Examples:* `DisplayMessage.java`, `AdditionWithUserInput.java`, `ArrayTraversalUsingLoop.java`, `ReverseStringUsingRecursion.java`.
- **Avoid generic names:** Never use generic names such as `Program1.java`, `Example2.java`, or `Test3.java`.
- **No numeric differentiation:** Do not use a numeric suffix merely to distinguish programs. Choose a more descriptive name based on the actual implementation.
- **Top-level class matching:** Ensure that a public top-level Java class has exactly the same name as its filename, including capitalization.

### B. Strict Source-Code Preservation
Source code must remain unchanged except for the explicitly permitted naming modifications below.

**Antigravity is authorized to:**
1. Rename the Java source file.
2. Rename the corresponding class identifier when necessary to match the new filename.
3. Update constructor names or direct references that must change solely because of that class rename, but only when necessary to keep the program consistent.

**Antigravity is NOT authorized to make any other code changes during organization.**

**Strictly Prohibited Modifications:**
- Do **not** add, remove, or modify `public`, `private`, `protected`, `static`, or any other access modifier or keyword.
- Do **not** add or remove `public` from the main class declaration.
- Do **not** change the `main` method signature or its access modifiers.
- Do **not** fix syntax errors, compilation errors, bugs, or warnings.
- Do **not** change program logic, algorithms, conditions, loops, variables, data types, or method implementations.
- Do **not** reformat code, change indentation, or modify whitespace.
- Do **not** add, remove, or rewrite comments.
- Do **not** add imports, remove imports, or change package declarations.
- Do **not** optimize code or apply coding standards automatically.
- Do **not** add missing code or invent functionality.

### C. Preserve the Learning Process
These are learning programs written by the user. Some programs may intentionally contain mistakes, incomplete logic, unusual formatting, or omitted access modifiers because the user is practicing.
- **Do not assume that imperfect code needs correction.** The goal is to preserve original work and track learning honestly.
- **Exact modifier preservation example:**
  - If the original code is:
    ```java
    class Program1 { ... }
    ```
    and the correct descriptive filename is `DisplayMessage.java`, Antigravity may rename the file and the class to:
    ```java
    class DisplayMessage { ... }
    ```
    It must **not** change this to `public class DisplayMessage` because that would be an additional source-code modification.
  - Similarly, if the code originally has `public class Program1`, the renamed declaration should be `public class DisplayMessage`.

### D. Handling Ambiguous Cases
- If a safe rename requires changes beyond the explicitly permitted naming modifications, **do not make those changes automatically**.
- Leave the program in `daily-inbox/`, explain the compatibility issue, and ask the user before proceeding.
- **Never silently make additional code changes to force compilation.**

### E. Verification and Reporting Protocol
After organizing Java files:
- **Filename & Class Match:** Verify that filenames match their public top-level class names where applicable.
- **Integrity Comparison:** Compare the original and final source code to confirm that only authorized class-name changes occurred.
- **Report Renames:** Report every file renamed and every class identifier changed.
- **Report Ambiguities:** Explicitly report any program left in `daily-inbox/` because its rename was ambiguous.
- **Compilation Reporting:** Compilation checks may be performed when practical, but compilation failures must be reported rather than automatically fixed.

### F. Final Overarching Rule
**Rename and organize programs; do not improve, repair, reformat, or otherwise rewrite code. Preserve the original implementation exactly, except for the explicitly authorized filename and corresponding class-name changes.**

---

## 4. Permanent Git Commit Convention & Type Selection

### A. Mandatory Commit Type Selection
**Never default every commit to `feat`.** Inspect the actual code changes and select the most appropriate commit type according to the explicit definitions below:

#### `feat` — New Concepts and Implementations
Use **strictly** when introducing a brand-new algorithm, data structure, or language capability that has not previously been implemented in the relevant module.
- *Inclusions:* First-time introduction of a specific concept, algorithm, or data structure.
- *Exclusions:* Do **not** use `feat` merely because a new file or practice program has been added. The program must represent a genuinely new concept or implementation within the relevant module.
- *Examples:*
  - `feat(bit-manipulation): implement fourth-bit inspection using bitwise mask`
  - `feat(trees): implement binary search tree node insertion`
  - `feat(arrays): implement array rotation using reversal algorithm`

#### `refactor` — Architectural Evolutions
Use when restructuring or evolving an existing solution without introducing a new problem statement or genuinely new core concept.
- *Inclusions:*
  - Moving business logic from `main()` into a helper function.
  - Migrating procedural functions into OOP helper classes or instantiated objects.
  - Transforming a single-file program into a multi-file header/source architecture.
  - Restructuring an existing implementation while preserving its intended behavior.
- *Exclusions:* Do **not** use `refactor` for a completely new implementation that introduces a genuinely new concept.
- *Examples:*
  - `refactor(arithmetic): extract inline addition into a helper function`
  - `refactor(java-oop): migrate static arithmetic methods into an instantiated object`

#### `test` — Testing and Verification
Use when adding test cases, assertion drivers, boundary-testing matrices, or test harnesses.
- *Inclusions:* Assertions, verification matrices, automated test suites, testing drivers.
- *Exclusions:* Do **not** use `test` simply because a program was compiled or manually executed.
- *Examples:*
  - `test(arithmetic): add assertion cases for boundary values`
  - `test(modular-addition): add automated unit test harness using assert`

#### `fix` — Error and Flaw Corrections
Use when correcting an actual bug or demonstrating the correction of an intentional logical flaw.
- *Inclusions:* Genuine bug fixes, corrected edge-case handling, resolved algorithmic flaws.
- *Critical Educational Guardrail:* This repository contains educational programs, and some may intentionally contain mistakes. Never fix them automatically during organization. Use `fix` **only** when the user has actually made or explicitly requested a correction.
- *Examples:*
  - `fix(conditionals): correct logical operator flaw in three-number maximum`
  - `fix(arrays): correct off-by-one error in array traversal`

#### `docs` — Documentation Only
Use when changes are limited strictly to repository documentation.
- *Inclusions:* `README.md`, `PROGRESS.md`, `ROADMAP.md`, and other Markdown files.
- *Exclusions:* Do **not** use `docs` for commits that also introduce or modify source-code implementations.
- *Examples:*
  - `docs(progress): update completed program count`
  - `docs(readme): clarify repository structure`

#### `chore` — Maintenance and Housekeeping
Use for repository organization and maintenance that does not introduce a new implementation or change program behavior.
- *Inclusions:* File movements, naming-only adjustments, folder restructuring, repository config, and maintenance of project rules.
- *Examples:*
  - `chore(organization): reclassify input buffer programs`
  - `chore(organization): organize daily programs into concept folders`
  - `chore(config): update repository instructions`

---

### B. Decision Rules for Mixed Changes
When a batch contains multiple kinds of changes:
1. **Inspect Diffs First:** Inspect every relevant diff (`git diff`, `git diff --cached`) before selecting commit types.
2. **Logical Grouping:** Group changes into logically coherent commits by concept and type.
3. **Separate by Concept/Type:** Use separate commits when changes represent meaningfully different types or concepts.
4. **Primary Purpose Rule:** If a single coherent change genuinely includes inseparable activities, select the type that best represents its primary purpose.
5. **No Forced Consolidation:** Never force unrelated changes into one commit simply to reduce commit count.
6. **No File-by-File Default:** Never create one commit per file by default.
7. **No Vanity Granularity:** Do not create artificial commits just to use every available type.
8. **Consult on Ambiguity:** If no listed type accurately describes a change, ask the user before inventing a new convention.

---

### C. Scope and Description Standards

Format:
```text
<type>(<scope>): <specific description>
```

#### Scopes
Choose a scope that accurately identifies the concept or area changed, rather than blindly copying the parent folder name. Representative scopes include:
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

### D. Handling Daily Programming Batches
When multiple programs are submitted in `daily-inbox/`:
- Analyze each program's actual concept, architecture, and implementation.
- Group related programs according to their purpose and appropriate commit type (`feat`, `refactor`, `test`, `fix`, `docs`, `chore`).
- Use one commit for a coherent group when appropriate.
- Split the batch when it contains genuinely distinct concepts or change types.
- Do not assign the same generic commit message to every file.
- **Do not use `feat(logic-building)` for every new program merely because it belongs to this repository.** Determine the correct scope from the actual implementation.

#### Concrete Progression Example:
Given a batch of files in `daily-inbox/`:
- `01-display-message.c` (basic output introduction)
- `02-addition-hardcoded.c` (addition logic introduction)
- `03-addition-naming-conventions.c`, `04-addition-user-input.c`, `05-addition-initialized-formatted.c` (input handling and formatting)
- `06-addition-modular-function.c`, `07-addition-function-documentation.c` (logic moved out of main into functions)
- `08-addition-test-cases.c` (test boundary harness)

**Do NOT** assign a single broad `feat` message to all files. Group by conceptual purpose and commit type:
- `01-display-message.c` $\rightarrow$ `feat(console-io): demonstrate basic console output`
- `02-addition-hardcoded.c`, `03-addition-naming-conventions.c`, `04-addition-user-input.c`, `05-addition-initialized-formatted.c` $\rightarrow$ `feat(arithmetic): implement addition with user input and formatting`
- `06-addition-modular-function.c`, `07-addition-function-documentation.c` $\rightarrow$ `refactor(arithmetic): extract inline addition into modular helper function`
- `08-addition-test-cases.c` $\rightarrow$ `test(arithmetic): add boundary and automated assertion test cases`

*(Choose the smallest sensible number of commits based on actual changes and concept boundaries.)*

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
