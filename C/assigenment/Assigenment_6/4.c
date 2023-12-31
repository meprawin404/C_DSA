// 4. Write a program to calculate sum of squares of first N natural numbers`

#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        sum+=(i*i);
    }
    printf("The sum of squre of n natural number is %d",sum);
    return 0;
}