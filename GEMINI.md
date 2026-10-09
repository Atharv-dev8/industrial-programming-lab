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

1. Raw code files are placed in `daily-inbox/` (e.g., `Program1.c`, `Program2.c`, etc.).
2. When the user requests: *"Organize today's programs"* (or similar):
   - Inspect the code to identify the true conceptual focus of each program.
   - Rename files to standardized, descriptive, kebab-case names (`NN-descriptive-name.ext`).
   - Move files into their corresponding module and language directory.
   - Update `PROGRESS.md` with accurate program counts.
3. **CRITICAL WORKFLOW BOUNDARY:**
   - Organizing, renaming, or moving files **DOES NOT** authorize committing or pushing.
   - Staging, committing, and pushing require explicit user request or confirmation.

---

## 3. Permanent Git Commit Message Policy

### A. Core Problem to Avoid
Never use vague, repetitive, or generic commit messages such as:
`feat(logic-building): add foundational problem solving and addition programs`
Such messages obscure actual work, do not communicate specific concepts learned, and degrade the repository's educational and portfolio value.

### B. Analyze Actual Changes Before Committing
Before creating any commit:
1. Run `git status` and inspect staged and unstaged diffs (`git diff`, `git diff --cached`).
2. Read the source code to identify the actual purpose, logic, and concepts demonstrated in the changed files.
3. Group files by their primary concept, functionality, or meaningful task.
4. Craft commit messages that accurately describe the specific changes in that group.
5. **Never** generate commit messages solely from the parent folder name.
6. **Never** use one generic message for unrelated groups of programs.

### C. Commit Grouping Rules
- **Related programs:** Group them into one logical commit with a specific message.
- **Different concepts:** Create separate commits when changes represent meaningfully different concepts, milestones, or features.
- **Small batches:** A single commit is acceptable only if all changes form one coherent conceptual unit.
- **Large batches:** Split them into multiple logical commits representing distinct concepts.
- **Granularity guidelines:**
  - Do **not** create one commit per file unless the files represent genuinely independent changes or the user explicitly requests it.
  - Do **not** create unnecessary vanity commits merely to increase commit count.
  - Do **not** combine unrelated changes just to reduce commit count.

#### Concrete Batch Example (e.g., 8-program addition progression):
Given a batch of files:
- `01-display-message.c`
- `02-addition-hardcoded.c`
- `03-addition-naming-conventions.c`
- `04-addition-user-input.c`
- `05-addition-initialized-formatted.c`
- `06-addition-modular-function.c`
- `07-addition-function-documentation.c`
- `08-addition-test-cases.c`

**Do NOT** assign a single broad message to all eight files. Instead, inspect the code and group by conceptual purpose:
- `01-display-message.c` $\rightarrow$ `feat(logic-building): add basic console output example`
- `02-addition-hardcoded.c` $\rightarrow$ `feat(arithmetic): demonstrate addition with hardcoded operands`
- `03-addition-naming-conventions.c`, `04-addition-user-input.c`, `05-addition-initialized-formatted.c` $\rightarrow$ `feat(arithmetic): add user-input and formatted addition examples`
- `06-addition-modular-function.c`, `07-addition-function-documentation.c` $\rightarrow$ `feat(functions): demonstrate modular addition and function documentation`
- `08-addition-test-cases.c` $\rightarrow$ `test(arithmetic): add addition test cases`

*(Choose the smallest sensible number of commits based on actual changes.)*

---

## 4. Commit Message Format

Use Conventional Commits for every commit:
```text
<type>(<scope>): <specific description>
```

### Allowed Types:
- `feat`: New programs, conceptual implementations, or functionality
- `fix`: An actual bug fix or logic correction
- `refactor`: Code restructuring or refactoring without intended behavior changes
- `test`: Test cases, verification tables, or test infrastructure
- `docs`: Documentation changes (`README.md`, `PROGRESS.md`, `ROADMAP.md`, inline code documentation)
- `chore`: Repository maintenance, configuration, or file reorganization

### Rules for Description & Scope:
- **Concise, specific, technically accurate:** Clearly state what was implemented or demonstrated.
- **Imperative mood:** Prefer `add`, `demonstrate`, `implement`, `document`, `refactor`, `optimize`.
- **Meaningful scopes:** Use descriptive scopes reflecting the actual domain, e.g.:
  - `arithmetic`, `arrays`, `matrices`, `strings`, `bits`, `memory`, `pointers`
  - `structures`, `recursion`, `functions`, `searching`, `sorting`
  - `java`, `collections`, `files`, `network`, `threads`, `oop`, `lld`
- **Strictly Banned Vague Phrases:**
  - `add foundational programs`
  - `update programs`
  - `add daily work`
  - `add multiple files`
  - `update logic building`
  - `add practice programs`
  - Or generic parent-folder echoes like `feat(logic-building): add foundational problem solving and addition programs`
- **No repetition:** Avoid repeating identical commit messages across different commits unless changes are genuinely equivalent.
- **Truthful claims:** Do not claim tests passed, bugs were fixed, or features were implemented unless supported by the actual diff.

---

## 5. Existing Commit History Policy

- **Leave existing history intact:** Do not rewrite, squash, amend, or delete past commits automatically.
- **No force-pushes:** Do not run `git push --force` or modify remote history.
- Apply this policy forward to all future commits.

---

## 6. Safety, Staging, and Approval Protocols

- **Commit authorization:** Only create commits when the user explicitly requests or confirms a commit.
- **Push authorization:** Only push (`git push`) when the user explicitly requests a push or authorizes a commit-and-push operation.
- **Inspect before staging:** Always inspect `git status` and diffs before staging.
- **Selective staging:** Stage only files belonging to the intended commit group (`git add <files>`).
- **Forbidden files:** NEVER stage or commit:
  - Secrets, tokens, credentials, or keys
  - Unrelated modifications
  - Build artifacts, compiled binaries (e.g., `myexe`, `*.o`, `*.out`, `*.class`)
  - IDE/editor settings (`.vscode/`, `.idea/`)
- **No destructive operations:** Never use `git reset --hard`, `git checkout .`, `git clean -fd`, or force-push without explicit user request.
- **Ask when uncertain:** If a program or change cannot be confidently classified, ask the user before creating its commit.

