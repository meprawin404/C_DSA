// 1. Write a program to find the Nth term of the Fibonnaci series.`
#include<stdio.h>
int main()
{
    int n,i;
    int t1=0, t2=1;
    int nextTerm = t1 + t2;
    printf("Enter the term: ");
    scanf("%d",&n);
    // printf("The fibonachi series: %d, %d, ",t1,t2);
    for ( i = 3; i <= n; i++)
    {
        // printf("%d, ",nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("%d ",nextTerm);
    return 0;
}