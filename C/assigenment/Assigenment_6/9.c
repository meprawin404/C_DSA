// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int num1,num2,i,gcd;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    int min = num1<num2?num1:num2;
    for ( i = 1; i <= min ; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
    }
    int lcm = (num1*num2)/gcd;
    printf("The lcm of %d & %d is %d",num1,num2,lcm);
    return 0;
}