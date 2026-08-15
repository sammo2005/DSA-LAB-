# DSA Lab - Data Structures & Algorithms in C

A collection of **Data Structures and Algorithms** laboratory implementations written in **C** for academic learning and practice.

This repository contains implementations of fundamental data structures, algorithms, recursion problems, searching and sorting techniques. Each topic is organized into separate folders to make the programs easier to study, compile, and test.

---

# 📌 Repository Overview

The main purpose of this repository is to understand Data Structures and Algorithms through practical implementation in C.

The programs are written independently so that individual concepts can be studied and tested without depending on other programs.

---

# 📚 Topics Covered

## 01. Arrays

Implementation of arrays with dynamic memory management.

**Concepts Covered**

- Dynamic memory allocation
- `malloc()`
- `calloc()`
- `realloc()`
- `free()`
- Array operations

**Source File**

- `Array_using_dynamic_memory.c`

---

## 02. Strings

Basic string manipulation and processing.

**Operations Covered**

- String manipulation
- Character handling
- String processing

**Source File**

- `string.c`

---

## 03. Linked List

Implementation of a **Singly Linked List**.

**Operations Included**

- Insert
- Delete
- Display

**Source File**

- `linked_list.c`

---

## 04. Stack

Implementation of the **Stack (LIFO)** data structure.

**Operations Included**

- Push
- Pop
- Peek
- Display
- Size tracking

**Source File**

- `stack.c`

---

## 05. Queue

Implementation of different queue structures.

**Types Included**

- Linear Queue
- Circular Queue

**Operations**

- Enqueue
- Dequeue
- Display

**Source Files**

- `queue.c`
- `circular_queue.c`

---

## 06. Trees

Implementation of a **Binary Tree**.

**Operations Included**

- Tree creation
- Preorder Traversal
- Inorder Traversal
- Postorder Traversal

**Source File**

- `binary_tree.c`

---

## 07. Binary Search Tree

Implementation of a **Binary Search Tree (BST)**.

**Operations Included**

- Insert
- Search
- Delete
- Inorder Traversal
- Preorder Traversal
- Postorder Traversal

**Source File**

- `binary_search_tree.c`

---

## 08. Heap

Implementation of heap data structures.

**Types Included**

- Min Heap
- Max Heap

**Operations Included**

- Insertion
- Deletion
- Heap operations

**Source Files**

- `min_heap.c`
- `max_heap.c`

---

## 09. Graph

Basic graph data structure implementation.

This section focuses on the representation and basic implementation of graphs, while graph algorithms are maintained separately in the **Algorithms** folder.

---

## 10. Recursion

Recursive solutions to common programming problems.

**Programs Included**

- Fibonacci Sequence
- Sum of a Series

**Source Files**

- `fibonacci.c`
- `sum.c`

---

## 11. Sorting

Implementation of commonly used sorting algorithms.

**Algorithms Included**

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort

**Source Files**

- `bubble_sort.c`
- `selection_sort.c`
- `insertion_sort.c`
- `merge_sort.c`
- `quick_sort.c`

---

## 12. Searching

Searching techniques implemented in C.

**Algorithms Included**

- Linear Search
- Binary Search

**Source Files**

- `linear_search.c`
- `binary_search.c`

---

## 13. Algorithms

A separate collection of important algorithms implemented in C.

**Algorithms Included**

- Breadth First Search (BFS)
- Depth First Search (DFS)
- Prime Number Algorithm
- Kruskal's Algorithm
- Huffman Coding
- Dijkstra's Algorithm

**Source Files**

- `bfs.c`
- `dfs.c`
- `prime.c`
- `kruskal.c`
- `huffman.c`
- `dijkstra.c`

---

# 📝 College Homework

The **College Homework** folder contains additional C programming tasks related to string operations.

**Operations Included**

- String Comparison
- String Concatenation
- String Length
- Character Search
- Substring Search

**Source File**

- `string_operations.c`

---

# 📁 Repository Structure

```text
DSA-Lab/
│
├── 01.Arrays/
│   ├── Array_using_dynamic_memory.c
│   └── README.md
│
├── 02.Strings/
│   ├── string.c
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
│   ├── binary_tree.c
│   └── README.md
│
├── 07.Binary Search Tree/
│   ├── binary_search_tree.c
│   └── README.md
│
├── 08.Heap/
│   ├── min_heap.c
│   ├── max_heap.c
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
│   ├── bubble_sort.c
│   ├── selection_sort.c
│   ├── insertion_sort.c
│   ├── merge_sort.c
│   ├── quick_sort.c
│   └── README.md
│
├── 12.Searching/
│   ├── linear_search.c
│   ├── binary_search.c
│   └── README.md
│
├── 13.Algorithms/
│   ├── bfs.c
│   ├── dfs.c
│   ├── prime.c
│   ├── kruskal.c
│   ├── huffman.c
│   ├── dijkstra.c
│   └── README.md
│
├── College Homework/
│   ├── string_operations.c
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

# ⚙️ Compilation

Each C program can be compiled separately using GCC.

```bash
gcc filename.c -o program
```

Run the compiled program:

```bash
./program
```

### Examples

**Stack**

```bash
gcc stack.c -o stack
./stack
```

**Linked List**

```bash
gcc linked_list.c -o linked_list
./linked_list
```

**Binary Search Tree**

```bash
gcc binary_search_tree.c -o bst
./bst
```

**Sorting**

```bash
gcc quick_sort.c -o quick_sort
./quick_sort
```

**Algorithms**

```bash
gcc dijkstra.c -o dijkstra
./dijkstra
```

---

# 🎯 Objectives

This repository is intended to:

- Understand fundamental data structures
- Implement algorithms from scratch in C
- Improve knowledge of pointers and memory management
- Practice recursion and problem solving
- Understand different searching and sorting techniques
- Develop practical DSA programming skills
- Prepare for DSA laboratory work and assessments

---

# 💻 Requirements

- GCC or any standard C compiler
- Basic knowledge of C programming
- Understanding of functions, arrays, loops, and pointers
- Basic understanding of Data Structures and Algorithms

---

# 📌 Repository Features

- Beginner-friendly C implementations
- Separate folders for individual topics
- Independent programs for easier testing
- Practical implementations of common DSA concepts
- Searching and sorting algorithms
- Graph and tree implementations
- Additional algorithm practice
- College homework and practice sections

---

# 🚀 Future Additions

Some possible future additions include:

- AVL Tree
- More Binary Tree operations
- Additional Heap operations
- Heap Sort
- More Graph implementations
- Additional graph algorithms
- More sorting techniques
- More searching techniques
- Additional recursion problems
- More DSA practice problems

---

# 👨‍💻 Author

**Sammo Talukdar**

Department of Computer Science & Engineering

Data Structures and Algorithms Laboratory

---

# 📄 License

This repository is intended for educational and learning purposes.

The programs are maintained as part of DSA laboratory practice and can be used as a reference for understanding the concepts and implementations.

**Last Updated:** August 2026
