# Searching

## Description

This folder contains separate C programs for searching elements in an array.

## Algorithms Included

### 1. Linear Search

File: `linear_search.c`

Checks each element one by one until the required value is found.

- Works with unsorted arrays
- Simple searching technique

### 2. Binary Search

File: `binary_search.c`

Repeatedly divides a sorted array into two parts to find the required value.

- Array must be sorted
- Faster than linear search for large sorted arrays

## Complexity

| Algorithm | Best Case | Average Case | Worst Case |
|-----------|-----------|--------------|------------|
| Linear Search | O(1) | O(n) | O(n) |
| Binary Search | O(1) | O(log n) | O(log n) |

## Memory

Both programs use dynamic memory allocation with `malloc()` and release the memory using `free()`.

## Language

C Programming
