// 8. Write a program to check whether a given number is a Prime number or
// not
#include<stdio.h>
int main()
{
    int num,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            flag = 1;
            break;
        }
    }
    if (flag==1)
    {
        printf("Not prime number");
    }
    else
    {
        printf("Prime number");
    }
    
    return 0;
}