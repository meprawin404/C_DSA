// 7. Write a program to find second largest in an array.Take array values from the user.

#include<stdio.h>
int main()
{
    int i,j,n,temp=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j<n ; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }  
    }
    printf("The second largest element of the array is %d",arr[n-2]);
    return 0;

}