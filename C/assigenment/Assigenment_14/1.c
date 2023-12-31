// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array: ");
    int i,j;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of all elements of arry is %d",sum);
    return 0;
    
}