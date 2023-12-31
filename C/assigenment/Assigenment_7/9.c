// 9. Write a program to check whether a given number is an Armstrong number
// or not
#include<stdio.h>
int main()
{
    int num, o_num, n_num, rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    o_num = num;
    while (num!=0)
    {
        rem = num%10;
        n_num+=rem*rem*rem; 
        num = num/10;
    }
    if (n_num==o_num)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not Armstrong number");
    }
    return 0;
}