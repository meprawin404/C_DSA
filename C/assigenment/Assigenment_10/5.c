// Write a function to print first N odd natural number.(TSRN)
#include<stdio.h>
void oddN(int);
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    oddN(t);
    return 0;
}

void oddN(int t)
{
    for (int i = 1; i <= t; i++)
    {
        if (i%2)
        {
            printf("%d ",i);
        }
        
    }
}