# Algorithms

This directory contains implementations of commonly used algorithms in C.

The programs are kept separate so that each algorithm can be compiled and tested independently.

## Algorithms Included

### 01. Breadth First Search
File: `bfs.c`

Graph traversal using a queue.

### 02. Depth First Search
File: `dfs.c`

Graph traversal using recursion.

### 03. Prime Number
File: `prime.c`

Checks whether a given number is prime.

### 04. Kruskal's Algorithm
File: `kruskal.c`

Finds the Minimum Spanning Tree of a weighted graph.

### 05. Huffman Coding
File: `huffman.c`

Generates Huffman codes using character frequencies.

### 06. Dijkstra's Algorithm
File: `dijkstra.c`

Finds the shortest distance from a source vertex to other vertices in a weighted graph.

## Complexity

| Algorithm | Complexity |
|---|---|
| BFS | O(V + E) |
| DFS | O(V + E) |
| Prime Check | O(√n) |
| Kruskal | O(E log E) |
| Huffman Coding | O(n log n) |
| Dijkstra | O(V²) |

## Compilation

Each program can be compiled separately.

```bash
gcc bfs.c -o bfs
./bfs
