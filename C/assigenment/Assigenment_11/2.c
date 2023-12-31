// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int,int);
int main()
{
    int num1,num2,result;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    result = hcf(num1,num2);
    printf("The HCF of %d & %d is %d",num1,num2,result);
    return 0;
}

int hcf(int num1, int num2)
{
    int i;
    int min = num1<num2?num1:num2;
    for ( i = 1; i <= min; i++)
    {
        if (num1%i==0 && num2%i==0)
        {
            return i;
        }
    }
    
}