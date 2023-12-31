// write a program to print first n natural numbers 
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Till where u want to print natural numbers: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
    
}