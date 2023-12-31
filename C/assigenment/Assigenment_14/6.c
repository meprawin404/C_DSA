// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.


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
    printf("The shorted array is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}