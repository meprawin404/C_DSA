// 1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
int greater(int [],int);
int main()
{
    int i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int great;
    great = greater(arr,n);
    printf("The greatest element in the array is %d",great);
    return 0;

}

int greater(int b[],int x)
{
    int large = b[0];
    for ( int i = 0; i < x; i++)
    {
        if (large<b[i])
        {
            large = b[i];
        }
        
    }
    return large;
     
}
