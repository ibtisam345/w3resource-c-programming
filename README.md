# C Programming Journey — w3resource Curriculum

> A self-directed study log tracking progress through the [w3resource C Programming Exercises](https://www.w3resource.com/c-programming-exercises/) from fundamentals to pointers and functions.

---

## About This Repository

This repository is a personal practice workspace for building strong C programming foundations. Every exercise is solved independently before consulting reference solutions, committed daily to maintain a consistent learning streak, and organised by topic for easy review.

**Who this is for:**
- **Me** — a living progress log and code reference I can return to anytime.
- **Visitors** — a transparent look at how a C curriculum can be structured and tracked from scratch.

---

## Commitment

I am committed to completing every exercise in the w3resource C Programming curriculum—or, at the very least, the vast majority of them. My objective is to develop a deep understanding of C through consistent practice rather than rushing toward completion. This repository serves as a record of that commitment, documenting both my progress and my determination to finish what I started.

---

## Stack & Environment

| Tool | Details |
|---|---|
| Language | C (C99 standard) |
| Compiler | GCC |
| Editor | Visual Studio Code |
| Version Control | Git + GitHub |
| Exercise Source | [w3resource C Exercises](https://www.w3resource.com/c-programming-exercises/) |

---

## Overall Progress

| # | Topic | Exercises | Status |
|---|---|---|---|
| 1 | Basic Declarations & Expressions | 125 | 🟡 In progress |
| 2 | Conditional Statements | 26 | 🔲 Not started |
| 3 | For Loops | 50 | 🔲 Not started |
| 4 | Arrays | 45 | 🔲 Not started |
| 5 | Strings | 30 | 🔲 Not started |
| 6 | Pointers & Functions | 34 | 🔲 Not started |
| | **Total** | **750** | **14 / 750 complete** |

> Update the status column as you progress: 🔲 Not started → 🟡 In progress → ✅ Complete

---

## Curriculum Progress Tracker

Check each box as you complete a batch. The section header shows a running count once you begin filling them in.

---

### 1 · Basic Declarations and Expressions

> Variables, data types, arithmetic operators, and formatted output with `printf`.

- [ ] **Exercises 1–10** — Basic printing & arithmetic ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php))
- [ ] **Exercises 11–20** — Variables, type sizes & mixed calculations ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php))
- [ ] **Exercises 21–30** — Days, months, temperature conversions & early conditionals ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/basic-declarations-and-expressions/index.php))

---

### 2 · Conditional Statements

> Decision-making with `if`, `else if`, `else`, and `switch`.

- [ ] **Exercises 1–12** — If-else basics, comparisons & boolean logic ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php))
- [ ] **Exercises 13–26** — Nested conditions, ternary operator & switch-case ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php))

---

### 3 · For Loop

> Iteration, accumulation, pattern printing, and numeric series.

- [ ] **Exercises 1–15** — Basic iteration, sums & factorials ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/for-loop/index.php))
- [ ] **Exercises 16–30** — Nested loops & geometric patterns ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/for-loop/index.php))
- [ ] **Exercises 31–50** — Number series, primes & math logic ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/for-loop/index.php))

---

### 4 · Array

> One-dimensional and two-dimensional arrays, sorting, searching, and matrix operations.

- [ ] **Exercises 1–15** — Storing, copying & reversing arrays ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/array/index.php))
- [ ] **Exercises 16–30** — Sorting algorithms & linear/binary search ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/array/index.php))
- [ ] **Exercises 31–45** — 2D arrays & matrix operations ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/array/index.php))

---

### 5 · String

> String manipulation using standard library functions and manual character-by-character logic.

- [ ] **Exercises 1–15** — Length, copying, concatenation & comparison ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/string/index.php))
- [ ] **Exercises 16–30** — Character manipulation, tokenisation & substrings ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/string/index.php))

---

### 6 · Pointers & Functions

> Modular code design with functions and direct memory management with pointers.

- [ ] **Functions 1–12** — Parameters, return types, scope & recursion ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/function/index.php))
- [ ] **Pointers 1–22** — Memory addresses, pointer arithmetic & pass-by-reference ([w3resource ↗](https://www.w3resource.com/c-programming-exercises/pointer/index.php))

---

## Repository Structure

```
c-programming-journey/
│
├── README.md                        
│
├── 01_basic_expressions/
│   ├── ex_01.c                      # Hello, World
│   ├── ex_02.c
│   └── ...
│
├── 02_conditional_statements/
│   ├── ex_01.c
│   └── ...
│
├── 03_for_loops/
│   ├── ex_01.c
│   └── ...
│
├── 04_arrays/
│   ├── ex_01.c
│   └── ...
│
├── 05_strings/
│   ├── ex_01.c
│   └── ...
│
└── 06_pointers_functions/
    ├── fn_01.c                      # Function exercises
    ├── ptr_01.c                     # Pointer exercises
    └── ...
```

Each `.c` file includes a brief comment at the top describing the problem being solved. Example:

```c
/*
 * Exercise: Array - ex_07.c
 * Task: Find the largest element in an array of n integers.
 * Source: https://www.w3resource.com/c-programming-exercises/array/
 */
```

---

## Learning Goals

1. **Daily practice** — Minimum 30 minutes of focused problem-solving every day.
2. **Independent solving** — Attempt every problem solo before consulting the w3resource solution.
3. **Daily commits** — Push changes to GitHub every day to maintain a visible activity streak.
4. **Understand before moving on** — Never check a box until the solution compiles, runs correctly, and is understood.

---

## How to Run Any Exercise

```bash
# Compile
gcc -Wall -std=c99 -o output 01_basic_expressions/ex_01.c

# Run
./output
```

> `-Wall` enables all compiler warnings — treat warnings as errors while learning.

---

## Progress Log

A running log of weekly highlights, breakthroughs, or notes to self.

| Week | Highlight |
|---|---|
| — | Journey not yet started. |

---

*Last updated: August 2026*