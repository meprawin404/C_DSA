// 10. Write a program to reverse a given number
#include<stdio.h>
int mainm()
{
    int num, remainder, reverse;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        remainder = num%10;
        num = num/10;
        reverse = remainder * 10 + remainder;
    }
    printf("The reverse number is %d",remainder);
    return 0;
}