# DSA Lab - Data Structures & Algorithms in C

A collection of Data Structures and Algorithms laboratory programs written in **C** for the **Data Structures and Algorithms (CSE 1-2)** course at college.

This repository contains implementations of fundamental data structures and algorithms along with organized folders for practice, notes, and future additions.

---

# 📌 Repository Overview

The purpose of this repository is to practice and understand the core concepts of Data Structures and Algorithms by implementing every topic from scratch in C.

Each program is written separately so that every concept can be studied independently.

---

# 📚 Implemented Topics

### 01. Arrays

**Concepts Covered**

* Dynamic memory allocation
* `malloc()`
* `calloc()`
* `realloc()`
* Memory deallocation using `free()`

**Source File**

* `Array_using_dynamic_memory.c`

---

### 03. Linked List

Implementation of a **Singly Linked List** including:

* Insert node
* Delete node
* Display list

**Source File**

* `linked_list.c`

---

### 04. Stack

Implementation of Stack using arrays.

Operations included:

* Push
* Pop
* Peek
* Display
* Stack overflow & underflow checking

**Source File**

* `stack.c`

---

### 05. Queue

Two queue implementations are available.

**Linear Queue**

* Enqueue
* Dequeue
* Display

**Circular Queue**

* Circular insertion
* Circular deletion
* Display

**Source Files**

* `queue.c`
* `circular_queue.c`

---

### 07. Binary Search Tree

Basic Binary Search Tree implementation.

Features:

* Insert node
* Search node
* Delete node
* Inorder Traversal
* Preorder Traversal
* Postorder Traversal

**Source File**

* `binary_search_tree.c`

---

### 10. Recursion

Recursive solutions for common problems.

Programs included:

* Fibonacci Sequence
* Sum of Series

**Source Files**

* `fibonacci.c`
* `sum.c`

---

### 12. Searching

Searching techniques implemented in C.

Algorithms:

* Linear Search
* Binary Search

**Source Files**

* `linear_search.c`
* `binary_search.c`

---

# 🚧 Topics Planned

The following topics will be added gradually.

* Strings
* Trees
* Heap
* Graph
* Sorting Algorithms
* Additional Searching Techniques

---

# 📁 Folder Structure

```text
DSA-Lab/
│
├── 01.Arrays/
│   ├── Array_using_dynamic_memory.c
│   └── README.md
│
├── 02.Strings/
│   └── README.md
│
├── 03.Linked List/
│   ├── linked_list.c
│   └── README.md
│
├── 04.Stack/
│   ├── stack.c
│   └── README.md
│
├── 05.Queue/
│   ├── queue.c
│   ├── circular_queue.c
│   └── README.md
│
├── 06.Trees/
│   └── README.md
│
├── 07.Binary Search Tree/
│   ├── binary_search_tree.c
│   └── README.md
│
├── 08.Heap/
│   └── README.md
│
├── 09.Graph/
│   └── README.md
│
├── 10.Recursion/
│   ├── fibonacci.c
│   ├── sum.c
│   └── README.md
│
├── 11.Sorting/
│   └── README.md
│
├── 12.Searching/
│   ├── linear_search.c
│   ├── binary_search.c
│   └── README.md
│
├── College Homework/
│   └── README.md
│
├── Notes/
│   └── README.md
│
├── Practice Problem/
│   └── README.md
│
├── .gitignore
└── README.md
```

---

# ⚙️ Compiling the Programs

Compile any source file using GCC.

```bash
gcc filename.c -o program
```

Run the executable.

```bash
./program
```

Example:

```bash
gcc stack.c -o stack
./stack
```

Example for Linked List:

```bash
gcc linked_list.c -o linked_list
./linked_list
```

Example for Binary Search:

```bash
gcc binary_search.c -o binary_search
./binary_search
```

---

# 🎯 Objectives

This repository is created to:

* Learn the fundamentals of Data Structures
* Practice programming in C
* Improve understanding of pointers and dynamic memory
* Build problem-solving skills
* Prepare for laboratory exams and programming assessments

---

# 💻 Requirements

* GCC Compiler (or any C compiler)
* Basic knowledge of C programming
* Familiarity with loops, functions, arrays, and pointers

---

# 📌 Features

* Simple and beginner-friendly code
* Separate implementation for every topic
* Easy-to-understand program structure
* Organized directory layout
* Suitable for DSA laboratory practice

---

# 📖 Future Improvements

Planned additions include:

* More tree algorithms
* Graph traversal algorithms
* Heap implementation
* Multiple sorting algorithms
* Advanced searching techniques
* Additional practice problems

---

# 👨‍💻 Author

**Your Name**

Department of Computer Science & Engineering

Data Structures and Algorithms Laboratory

---

# 📄 License

This repository is intended solely for educational and learning purposes.

Feel free to explore the programs, study the implementations, and use them for academic practice.

**Last Updated:** 2026
