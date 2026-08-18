#include <stdio.h>

#define MAX 20

int main()
{
    int graph[MAX][MAX];
    int vertices, edges;
    int i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            graph[i][j] = 0;
        }
    }

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (source destination):\n");

    for (i = 0; i < edges; i++)
    {
        int source, destination;

        scanf("%d %d", &source, &destination);

        if (source >= 0 && source < vertices &&
            destination >= 0 && destination < vertices)
        {
            graph[source][destination] = 1;
            graph[destination][source] = 1;
        }
        else
        {
            printf("Invalid edge. Try again.\n");
            i--;
        }
    }

    printf("\nAdjacency Matrix:\n");

    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            printf("%d ", graph[i][j]);
        }

        printf("\n");
    }

    return 0;
}
