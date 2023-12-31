// 5. Write a program to print the first 10 odd natural numbers in reverse order.
// #include<stdio.h>
// int main()
// {
//     for (int i = 19; i >= 1; i-=2)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int t;
    printf("Enter the tearm: ");
    scanf("%d",&t);
    for (int i = t; i >=1 ; i--)
    {
        if (i%2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}