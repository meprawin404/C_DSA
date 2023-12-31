#include<stdio.h>
int main()
{
    int k;
    // printf("Enter the lines: ");
    // scanf("%d",&line);
    for (int i = 1; i <= 5; i++)
    {
        k=65;
        for (int j = 1; j <= 5; j++)
        {
            if (j>=i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        k--;
        printf("\n");
        
    }
    return 0;
}