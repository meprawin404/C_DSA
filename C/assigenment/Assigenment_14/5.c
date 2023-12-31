// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>
int main()
{
    int i,n,smallest=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (smallest>arr[i])
        {
            smallest = arr[i];
        }
    }
    printf("The smallest element of array is %d",smallest);
    return 0;
}