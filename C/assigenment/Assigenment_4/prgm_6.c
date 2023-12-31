// 6. Write a program to print the first 10 even natural numbers
// #include<stdio.h>
// int main()
// {
//     for (int i = 2; i <= 20 ; i+=2)
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
    for (int i = 2; i <= t; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}