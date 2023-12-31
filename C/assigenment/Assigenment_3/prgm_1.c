// 1. Write a program to check whether a given number is positive or non-positive. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive number\n",num);
    }
    else
    {
        printf("%d is non-positive number",num);
    }
    return 0;
    
}