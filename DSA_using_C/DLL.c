#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int item;
    struct node *next;
};

void insertAtStart(struct node **s, int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->prev = NULL;
    n->item = data;
    n->next = NULL;
    if (*s == NULL)
    {
        *s = n;
    }
    else
    {
        n->next = *s;
        (*s)->prev = n;
        *s = n;
    }
}

void insertAtPosition(struct node **s,int index, int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->prev = NULL;
    n->item = data;
    n->next = NULL;
    if(index == 1){
        n->next = *s;
        *s = n;
    }
    else
    {
        struct node *temp;
        temp = *s;
        for (int i = 1; i < index-1; i++)
        {
            temp = temp->next;
        }
        n->next = temp->next;
        n->prev = temp;
        
        
    }
}

void insertAtLast(struct node **s, int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->item = data;
    n->next = NULL;
    n->prev = NULL;
    if (*s == NULL)
    {
        *s = n;
    }
    else
    {
        struct node *temp;
        temp = *s;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void viewAll(struct node *s)
{
    printf("\n");
    while (s != NULL)
    {
        printf("%d ", s->item);
        s = s->next;
    }
}

int main()
{
    struct node *start = NULL;

    insertAtStart(&start, 10);
    insertAtStart(&start, 20);
    insertAtLast(&start, 30);
    viewAll(start);
    return 0;
}