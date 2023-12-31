// 1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int t,sum=0;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        sum+=i;
    }
    printf("The sum of n natural number is %d",sum);
    return 0;
}