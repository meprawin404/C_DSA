// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("%d is positive number",num);
    }
    else if (num<0)
    {
        printf("%d is negative number",num);
    }
    else if (num==0)
    {
        printf("%d is zero",num);
    }
    else
    printf("Enter valid input");
    
    return 0;
}