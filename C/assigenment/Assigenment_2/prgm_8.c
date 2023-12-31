// 8. Write a program to check whether the given number is even or odd using a bitwise 
// operator. 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n&1)
    {
        printf("odd number");
    }
    else
    {
        printf("Even number");
    }
    return 0;
}