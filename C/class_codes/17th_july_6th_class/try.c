#include<stdio.h>
int main()
{
    int a,b;
    for (int a =1 ; a<=4; a++)
    {
        for (int b = 1; b<=5; b++)
        {
            printf("%d ",b*a);
        }
        printf("\n");
    }
    return 0;
}