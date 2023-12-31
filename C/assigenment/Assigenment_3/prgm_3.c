// . Write a program to check whether a given number is an even number or an odd 
// number.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%2)
    {
        printf("%d is odd number",num);
    }
    else
    {
        printf("%d is even number",num);
    }
    return 0;
}