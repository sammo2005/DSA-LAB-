# Sorting

## Description

This folder contains separate C programs for commonly used sorting algorithms.

Each algorithm is implemented independently to make it easier to study and understand how different sorting techniques work.

## Sorting Algorithms

### 1. Bubble Sort
File: `bubble_sort.c`

Repeatedly compares adjacent elements and swaps them when they are in the wrong order.

### 2. Selection Sort
File: `selection_sort.c`

Finds the smallest element from the unsorted portion and places it in the correct position.

### 3. Quick Sort
File: `quick_sort.c`

Uses a pivot to divide the array into smaller sections and sorts them recursively.

### 4. Merge Sort
File: `merge_sort.c`

Divides the array into smaller parts, sorts them, and then merges the sorted parts.

### 5. Heap Sort
File: `heap_sort.c`

Uses a Max Heap to repeatedly place the largest element at the end of the array.

### 6. Radix Sort
File: `radix_sort.c`

Sorts numbers digit by digit. This implementation works with non-negative integers.

## Complexity

| Algorithm | Average Time | Worst Time |
|-----------|--------------|------------|
| Bubble Sort | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) |
| Quick Sort | O(n log n) | O(n²) |
| Merge Sort | O(n log n) | O(n log n) |
| Heap Sort | O(n log n) | O(n log n) |
| Radix Sort | O(nk) | O(nk) |

## Memory

The programs use dynamic memory allocation with `malloc()` and release allocated memory using `free()`.

## Language

C Programming
