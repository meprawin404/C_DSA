// 8. Write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i<=t; i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}