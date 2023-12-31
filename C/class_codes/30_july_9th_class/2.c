#include<stdio.h>
int main()
{
    int a[10], i,sum_e=0,sum_o = 0;
    printf("Enter Ten numbers: ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%2==0)
        {
            sum_e = sum_e + a[i];
        }
        else
        {
            sum_o = sum_o + a[i];
        }
    }

    printf("Sum of all even number within the range of %d is %d\n",10,sum_e);
    printf("Sum of all odd number within the range of %d is %d",10,sum_o);
    return 0;
    
}