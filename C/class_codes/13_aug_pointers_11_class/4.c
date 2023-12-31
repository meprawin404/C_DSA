#include<stdio.h>
void input(int *, int);
void display(int *, int);
int main()
{
    int a[10];
    input(a,10);
    // display(a,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}

void display(int *p, int size)
{
    int i;
    for ( i = 0; i < size; i++)
    {
        printf("%d ",*(p+i));
    }
    
}


void input(int *p,int size)
{
    printf("Enter 10 numbers: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",p+i);
    }
    
}