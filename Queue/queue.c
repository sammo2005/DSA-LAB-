#include <stdio.h>

#define SIZE 20

int queue[SIZE];
int front = -1;
int rear = -1;

// Insert an element
void enqueue(int value)
{
    if(rear == SIZE - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
}

// Remove an element
void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;

    if(front > rear)
    {
        front = -1;
        rear = -1;
    }
}

// Display the queue
void display()
{
    if(front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements: ");

    for(int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

// Show the first element
void peek()
{
    if(front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}

int main()
{
    enqueue(11);
    enqueue(23);
    enqueue(37);
    enqueue(49);

    display();

    peek();

    dequeue();

    display();

    enqueue(58);

    display();

    return 0;
}
