// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%3==0 || num%7==0)
    {
        printf("%d is divisible by 3 or 7");
    }
    else
    printf("%d isn't divisible by 3 or 7");
    
    return 0;
}