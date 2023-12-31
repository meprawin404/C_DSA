// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%2==0 && num%3==0)
    {
        printf("%d Divisible by 2 and 3",num);
    }
    else
    {
        printf("%d isn't divisible by 2 and 3",num);
    }
    return 0;
}