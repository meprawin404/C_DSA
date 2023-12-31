// 7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
    int num,rem,que,count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=0)
    {
        // que = num/10;
        num = num/10;
        count++;
    }
    printf("The number of digits %d",count);
    return 0;
}