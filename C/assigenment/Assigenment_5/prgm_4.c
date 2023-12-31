// 4. Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i<= t; i++)
    {
        if (i%2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}