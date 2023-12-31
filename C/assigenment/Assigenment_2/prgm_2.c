// Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num,rslt;
    printf("Enter a number: ");
    scanf("%d",&num);
    rslt = num/10;
    printf("Number without last digit is %d",rslt);
    return 0;
}