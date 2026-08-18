#include <stdio.h>
#include <stdlib.h>

#define MAX 20

struct Node
{
    int vertex;
    struct Node *next;
};

struct Node *graph[MAX];

struct Node *createNode(int vertex)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->vertex = vertex;
    newNode->next = NULL;

    return newNode;
}

void addEdge(int source, int destination)
{
    struct Node *newNode;

    newNode = createNode(destination);
    newNode->next = graph[source];
    graph[source] = newNode;

    newNode = createNode(source);
    newNode->next = graph[destination];
    graph[destination] = newNode;
}

void displayGraph(int vertices)
{
    int i;

    for (i = 0; i < vertices; i++)
    {
        struct Node *temp = graph[i];

        printf("%d -> ", i);

        while (temp != NULL)
        {
            printf("%d ", temp->vertex);
            temp = temp->next;
        }

        printf("\n");
    }
}

int main()
{
    int vertices, edges;
    int i;

    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    for (i = 0; i < vertices; i++)
    {
        graph[i] = NULL;
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
            addEdge(source, destination);
        }
        else
        {
            printf("Invalid edge. Try again.\n");
            i--;
        }
    }

    printf("\nAdjacency List:\n");

    displayGraph(vertices);

    return 0;
}
