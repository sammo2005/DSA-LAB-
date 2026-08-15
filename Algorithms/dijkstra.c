#include <stdio.h>

#define MAX 20
#define INF 999999

int main()
{
    int graph[MAX][MAX];
    int distance[MAX];
    int visited[MAX];

    int n;
    int start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    printf("(Use 0 when there is no direct edge)\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);

            if (i != j && graph[i][j] == 0)
                graph[i][j] = INF;
        }
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    for (int i = 0; i < n; i++)
    {
        distance[i] = graph[start][i];
        visited[i] = 0;
    }

    distance[start] = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int minDistance = INF;
        int current = -1;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && distance[i] < minDistance)
            {
                minDistance = distance[i];
                current = i;
            }
        }

        if (current == -1)
            break;

        visited[current] = 1;

        for (int i = 0; i < n; i++)
        {
            if (!visited[i] &&
                graph[current][i] != INF &&
                distance[current] + graph[current][i] < distance[i])
            {
                distance[i] =
                    distance[current] + graph[current][i];
            }
        }
    }

    printf("\nShortest distances from vertex %d:\n", start);

    for (int i = 0; i < n; i++)
    {
        if (distance[i] == INF)
            printf("%d -> %d = Not reachable\n", start, i);
        else
            printf("%d -> %d = %d\n", start, i, distance[i]);
    }

    return 0;
}
