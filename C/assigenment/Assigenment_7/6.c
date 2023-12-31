// 6. Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,j, isprime;
    for (i = 2; i < 100; i++)
    {
        isprime = 1;
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                isprime = 0;
                break;
            }
            
        }
        if (isprime)
        {
            printf("%d ",i);
        }
    }

    return 0;
}



