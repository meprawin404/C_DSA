#include <stdio.h>
#include <stdlib.h>

struct node
{
    int item;
    struct node *next;
};


void insertAtStart(struct node **s,int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n ->item = data;
    n ->next = NULL;
    if (*s == NULL)
    {
        *s = n;
    }
    else
    {
        n->next = *s;
        *s = n;
    }
    
}

void insertAtPosition(struct node **s,int index, int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n ->item = data;
    n ->next = NULL;
    if (index == 1)
    {
        n->next = *s;
        *s = n;
    }
    else
    {
        struct node *temp;
        temp = *s;
        for (int i = 1; i < index-1 ; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        
        
    }
    
}

void insertAtEnd(struct node **s, int data)
{
    struct node *n, *temp;
    n = (struct node *)malloc(sizeof(struct node));
    n -> item = data;
    n ->next = NULL;
    if (*s == NULL)
    {
        *s = n;
    }
    else
    {
        temp = *s;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void deleteAtStart(struct node **s)
{
    struct node *temp;
    if (*s != NULL)
    {
        temp = *s;
        *s = temp->next;
        free(temp);
    }
        
}

void viewAll(struct node *start)
{
    printf("\n");
    while (start)
    {
        printf("%d ",start->item);
        start = start->next;
    }
    
}


int main()
{
    struct node *start = NULL;
    insertAtEnd(&start, 10);
    insertAtEnd(&start, 20);
    insertAtEnd(&start, 30);
    insertAtEnd(&start, 40);
    insertAtEnd(&start, 50);
    insertAtEnd(&start, 60);

    viewAll(start);

    // deleteAtStart(&start);
    // insertAtStart(&start,3);
    insertAtPosition(&start,3,90);

    viewAll(start);
    return 0;
}