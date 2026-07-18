#include <stdio.h>

#define SIZE 25

int stack[SIZE];
int top = -1;

void push(int data)
{
    if(top == SIZE - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    stack[++top] = data;
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }

    printf("Deleted element: %d\n", stack[top--]);
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Current Stack:\n");

    for(int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }

    printf("\n");
}

int main()
{
    push(7);
    push(15);
    push(28);
    push(42);

    display();

    peek();

    pop();

    display();

    push(55);

    display();

    return 0;
}
