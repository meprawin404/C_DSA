// 6. Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 2; i<=t; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}