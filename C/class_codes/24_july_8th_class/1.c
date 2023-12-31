#include<stdio.h>
int sum(int);
int main()
{
    int n,result;
    printf("Enter the term: ");
    scanf("%d",&n);
    result = sum(n);
    printf("The sum of n terms is %d",result);
    return 0;
}

int sum(int x)
{
    int s;
    if (x==1)
    {
        return 1;
    }
    s = x+sum(x-1);
    return s;
}