#include <stdio.h>
#include <stdlib.h>

int *heap;
int size = 0;
int capacity;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insert(int value)
{
    if(size == capacity)
    {
        printf("Heap is full.\n");
        return;
    }

    int i = size;
    heap[size++] = value;

    while(i > 0)
    {
        int parent = (i - 1) / 2;

        if(heap[parent] >= heap[i])
            break;

        swap(&heap[parent], &heap[i]);

        i = parent;
    }
}

void heapify(int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < size && heap[left] > heap[largest])
        largest = left;

    if(right < size && heap[right] > heap[largest])
        largest = right;

    if(largest != i)
    {
        swap(&heap[i], &heap[largest]);
        heapify(largest);
    }
}

void deleteRoot()
{
    if(size == 0)
    {
        printf("Heap is empty.\n");
        return;
    }

    printf("Deleted: %d\n", heap[0]);

    heap[0] = heap[size - 1];
    size--;

    heapify(0);
}

void display()
{
    int i;

    if(size == 0)
    {
        printf("Heap is empty.\n");
        return;
    }

    printf("Heap Elements: ");

    for(i = 0; i < size; i++)
    {
        printf("%d ", heap[i]);
    }

    printf("\n");
}

int main()
{
    int choice, value;

    printf("Enter heap capacity: ");
    scanf("%d", &capacity);

    heap = (int *)malloc(capacity * sizeof(int));

    if(heap == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    do
    {
        printf("\n===== MAX HEAP =====\n");
        printf("1. Insert\n");
        printf("2. Delete Root\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            insert(value);
            break;

        case 2:
            deleteRoot();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Program Ended.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while(choice != 4);

    free(heap);

    return 0;
}
