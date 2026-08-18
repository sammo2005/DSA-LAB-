# Graph

This folder contains basic graph implementations in C.

The graph data structure is represented using two common methods:

- Adjacency Matrix
- Adjacency List

Graph algorithms such as BFS, DFS, Dijkstra's Algorithm, and Kruskal's Algorithm are available separately in the `13.Algorithms` folder.

---

## Files

### 1. Adjacency Matrix

**File:** `adjacency_matrix.c`

This program represents an undirected graph using a two-dimensional array.

The user provides:

- Number of vertices
- Number of edges
- Source and destination vertices

The program then creates and displays the adjacency matrix.

Example:

```text
Enter number of vertices: 4
Enter number of edges: 4

Adjacency Matrix:

0 1 1 0
1 0 0 1
1 0 0 1
0 1 1 0
