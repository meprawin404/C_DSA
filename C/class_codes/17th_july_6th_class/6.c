// *****
//  ****
//   ***
//    **
//     *
#include<stdio.h>
int main()
{
    int line;
    printf("Enter the lines: ");
    scanf("%d",&line);
    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= line; j++)
        {
            if (j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    return 0;
}