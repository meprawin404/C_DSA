// Write a program to check whether a given number is divisible by 5 or not 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%5)
    {
        printf("%d isn't divisible by 5",num);
    }
    else
    {
        printf("%d is divisiable by 5",num);
    }
    return 0;
}