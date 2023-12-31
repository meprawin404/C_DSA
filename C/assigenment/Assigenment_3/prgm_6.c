// 6. Write a program to print greater between two numbers. Print one number of both are 
// the same 
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    if (num1==num2)
    {
        printf("both numbers are equal %d",num1);
    }
    else if (num1>num2)
    {
        printf("1st number is greater %d",num1);
    }
    else
    {
        printf("2nd number is greater %d",num2);
    }
    return 0;
    
}