// #include<stdio.h>
// int fact(int);
// int main()
// {
//     int num,result;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     result = fact(num);
//     printf("The factoral of %d is %d",num,result);
//     return 0;
// }

// int fact(int x)
// {
//     int fc;
//     if (x==1)
//     {
//         return 1;
//     }
//     fc = x * fact(x-1);
//     return fc;
// }


#include<stdio.h>
int fact(int);
int main()
{
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = fact(num);
    printf("The fact of %d is %d",num,result);
    return 0;
}

int fact(int n)
{
    
    if (n==1 || n==0)
    {
        return 1;
    }
    
    return n*fact(n-1);
}