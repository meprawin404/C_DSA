// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr_1[n],arr_2[n];
    printf("Enter the %d elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr_1[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        arr_2[i] = arr_1[i];
    }

    printf("The copyed array is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr_2[i]);
    }
    return 0;
}