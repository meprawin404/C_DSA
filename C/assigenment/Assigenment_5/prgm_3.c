// 3. Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = t; i >= 1; i--)
    {
        printf("%d ",i);
    }
    return 0;
}