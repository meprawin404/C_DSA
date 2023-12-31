// Write a function to check whether a given number contains a given digit or not. 
// (TSRS)

// #include<stdio.h>
// int check(int , int);
// int main()
// {
//     int digit,num,result;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Enter the digit to check: ");
//     scanf("%d",&digit);
//     result = check(num,digit);
//     if (result==1)
//     {
//         printf("%d is present in %d",digit,num);
//     }
//     else
//     {
//         printf("%d isn't present in %d",digit,num);
//     }
//     return 0;
// }

// int check(int num, int digit)
// {
//     int e_digit;
//     while (num!=0)
//     {
//         e_digit = num%10;
//         if (e_digit==digit)
//         {
//             return 1;
//         }
//         num = num/10;
//     }
//     return 0;
// }



#include<stdio.h>
int check(int,int);
int main()
{
    int num,digit,result;
    printf("Enter the a number: ");
    scanf("%d",&num);
    printf("Enter a digit: ");
    scanf("%d",&digit);
    result = check(num,digit);
    if (result == 1)
    {
        printf("%d is present in %d",digit,num);
    }
    else
    {
        printf("%d isn't present in %d",digit,num);
    }
    return 0;
    
}

int check(int number, int digit){
    int c_digit;
    while (number!=0)
    {
        c_digit = number%10;
        if (c_digit==digit)
        {
            return 1;
        }
        number = number/10;
    }
    return 0;
}