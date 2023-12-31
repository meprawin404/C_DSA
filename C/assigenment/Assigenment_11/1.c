// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int lcm(int,int);
int main()
{
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    result = lcm(num1,num2);
    printf("The LCM of %d & %d is %d",num1,num2,result);
    return 0;
}

int lcm(int num1, int num2)
{
    int i,gcd;
    int min = num1<num2?num1:num2;
    for ( i = 1; i <= min; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }
    return (num1*num2)/gcd;
    
}