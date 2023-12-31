// Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int num, rem=0, sum=0;
    printf("Enter a three digit number: ");
    scanf("%d",&num);

    rem = num%10;
    num = num/10;
    sum = sum+rem;

    rem = num%10;
    num = num/10;
    sum = sum+rem;

    rem = num%10;
    num = num/10;
    sum = sum+rem;

    printf("The of digits of number is %d",sum);
    return 0;

}