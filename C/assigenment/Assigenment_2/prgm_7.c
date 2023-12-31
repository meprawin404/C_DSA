// 7. Write a program to find the position of first 1 in LSB. 
#include<stdio.h>
int main()
{
    int x,count=1;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    int result = 0;
    while (x!=0)
    {
        result = x&1;
        if (result==1)
        {
            printf("The position of 1 is at %dth\n",count);
            break;
        }
        count++;
        x = x>>1;
    }
    return 0;
}