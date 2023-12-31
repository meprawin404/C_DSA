// 5. Write a program to check whether a given number is a three-digit number or not 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num>99 && num<1000)
    {
        printf("it is three digit number");
    }
    else
    {
        printf("it isn't three digit number");
    }
    return 0; 
}