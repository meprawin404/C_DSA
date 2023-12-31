#include<stdio.h>
int main()
{
    for (int j = 1; j<=3; j++) //row
    {
        for (int i = 1; i <= 5; i++)  //colum
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}