// 7. Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int i,j,s_num,e_num,isprime;
    printf("Enter the starting and ending number: ");
    scanf("%d%d",&s_num,&e_num);
    for ( i = s_num; i < e_num; i++)
    {
        isprime = 1;
        for ( j = 2; j < i; j++)
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