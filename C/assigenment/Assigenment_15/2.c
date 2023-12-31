// 2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>
int smallesr(int [],int);
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
    
    int result = smallesr(arr,n);
    printf("The smallest element in the array is %d",result);
    return 0;
}

int smallesr(int b[],int x)
{
    int small = b[0];
    for (int i = 0; i < x; i++)
    {
        if (b[i]<small)
        {
            small = b[i];
        }
        
    }
    return small;
}