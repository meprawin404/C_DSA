// 4. Write a program to print the first 10 odd natural numbers
// #include<stdio.h>
// int main()
// {
//     for (int i = 1; i <=20 ; i+=2)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = 1; i <= t; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}