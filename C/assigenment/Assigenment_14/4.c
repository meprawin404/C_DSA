// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.

#include<stdio.h>
int main()
{
    int i,n,largest=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = arr[i];
    for ( i = 0; i < n; i++)
    {
        if (largest<arr[i])
        {
            largest = arr[i];
        }
        
    }
    printf("The largest element of array is %d",largest);
    return 0;
}


#include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the number elements: ");
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
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
    printf("The largest element in the array is %d",arr[n-1]);
    return 0;
    
}