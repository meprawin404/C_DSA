// wap to print sum of first n natural number
#include<stdio.h>
int main()
{
    int sum=0,t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        sum+=i;
    }
    printf("The sum of n natural number is %d",sum);
    return 0;
    
}