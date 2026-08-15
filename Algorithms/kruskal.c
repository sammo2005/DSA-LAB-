#include <stdio.h>

#define MAX 50

struct Edge
{
    int source;
    int destination;
    int weight;
};

int parent[MAX];

int find(int vertex)
{
    if (parent[vertex] == vertex)
        return vertex;

    return find(parent[vertex]);
}

void unionSet(int a, int b)
{
    int rootA = find(a);
    int rootB = find(b);

    parent[rootA] = rootB;
}

void sortEdges(struct Edge edges[], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (edges[j].weight > edges[j + 1].weight)
            {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int main()
{
    struct Edge edges[MAX];
    int vertices, edgeCount;
    int selected = 0;
    int totalWeight = 0;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter number of edges: ");
    scanf("%d", &edgeCount);

    printf("Enter source, destination and weight:\n");

    for (int i = 0; i < edgeCount; i++)
    {
        scanf("%d %d %d",
              &edges[i].source,
              &edges[i].destination,
              &edges[i].weight);
    }

    for (int i = 0; i < vertices; i++)
        parent[i] = i;

    sortEdges(edges, edgeCount);

    printf("\nEdges in Minimum Spanning Tree:\n");

    for (int i = 0; i < edgeCount && selected < vertices - 1; i++)
    {
        int u = edges[i].source;
        int v = edges[i].destination;

        if (find(u) != find(v))
        {
            printf("%d -- %d  = %d\n",
                   u, v, edges[i].weight);

            totalWeight += edges[i].weight;

            unionSet(u, v);
            selected++;
        }
    }

    printf("Total weight = %d\n", totalWeight);

    return 0;
}
