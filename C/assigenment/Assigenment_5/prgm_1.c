// 1. Write a program to print MySirG N times on the screen
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        printf("MySirG[%d]\n",i);
    }
    return 0;
}