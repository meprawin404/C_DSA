// 4. Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{
    int num,num1,hcf;
    printf("Enter two numbers: ");
    scanf("%d%d",&num,&num1);
    int min = num<num1? num:num1;
    for (int i = 1; i <= min; i++)
    {
        if (num%i==0 && num1%i==0)
        {
            hcf = i;
        }
        
    }
    printf("The HCF of %d and %d is %d",num,num1,hcf);
    return 0;
}