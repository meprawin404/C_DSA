// WAF to calculate factroal of a number(TSRS)
// #include<stdio.h>
// int main()
// {
//     int num,fact=1;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for (int  i = 1; i < num; i++)
//     {
//         fact = fact*i;
//     }
//     printf("Factroal of %d is %d",num,fact);
//     return 0;
// }

#include<stdio.h>
int fact(int);
int main()
{
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = fact(num);
    printf("The factroal of %d is %d",num,result);
    return 0;
}

int fact(int x)
{
    int fc=1;
    for (int i = 1; i <= x; i++)
    {
        fc*=i;
    }
    return fc;
}