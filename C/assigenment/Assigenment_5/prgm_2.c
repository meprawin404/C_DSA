// 2. Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        printf("%d ",i);
    }
    return 0;
}