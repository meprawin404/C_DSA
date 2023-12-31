//3. Write a program to calculate sum of first N odd natural numbers 
#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        if (i%2)
        {
            sum+=i;
        }
        
    }
    printf("The sum of n odd natural number is %d",sum);
    return 0;
}