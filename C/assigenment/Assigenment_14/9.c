// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.

#include<stdio.h>
int main()
{
    int i,j,n,temp=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j<n; j++)
        {
            if (arr[i]<arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    printf("The sorted array in reverse order is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}