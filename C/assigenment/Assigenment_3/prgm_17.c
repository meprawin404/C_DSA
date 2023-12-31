// 18. Write a program which takes the month number as an input and display number of 
// days in that month

#include<stdio.h>
int main()
{
    int m;
    printf("Enter the number of month: ");
    scanf("%d",&m);
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        printf("The month has 31 days");
    }
    else if (m==2)
    {
        printf("The month has 28 days n 29 days when it is leap year");
    }
    else
    {
        printf("The month has 30 days");
    }
    return 0;
}