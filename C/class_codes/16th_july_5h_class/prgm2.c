// write a program to print "MySirG" n times using while
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("how many times you want to print: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}