#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertEnd(int value)
{
    struct Node *newNode, *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if(newNode == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteValue(int value)
{
    struct Node *temp = head;
    struct Node *prev = NULL;

    while(temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Element not found.\n");
        return;
    }

    if(prev == NULL)
    {
        head = head->next;
    }
    else
    {
        prev->next = temp->next;
    }

    free(temp);
}

void display()
{
    struct Node *temp = head;

    if(temp == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List : ");

    while(temp != NULL)
    {
        printf("%d", temp->data);

        if(temp->next != NULL)
            printf(" -> ");

        temp = temp->next;
    }

    printf("\n");
}

void freeList()
{
    struct Node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    int n, i, value, removeValue;

    printf("How many nodes: ");
    scanf("%d", &n);

    printf("Enter values:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &value);
        insertEnd(value);
    }

    display();

    printf("Enter value to delete: ");
    scanf("%d", &removeValue);

    deleteValue(removeValue);

    display();

    freeList();

    return 0;
}
