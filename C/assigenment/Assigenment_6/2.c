// 2. Write a program to calculate sum of first N even natural numbers
// #include<stdio.h>
// int main()
// {
//     int e_n,sum=0;
//     printf("Enter the number: ");
//     scanf("%d",&e_n);
//     for (int i = 2; i <= e_n; i++)
//     {
//         if (i%2==0)
//         {
//             sum+=i;
//         }
        
//     }
//     printf("The sum of n even natural number is %d",sum);
//     return 0;
// }

//OR

#include<stdio.h>
int main()
{
    int e_n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&e_n);
    for (int i = 2; i <= e_n; i+=2)
    {
        sum+=i;
        
    }
    printf("The sum of n even natural number is %d",sum);
    return 0;
}