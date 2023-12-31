// 3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>
void sort(int [],int);
int main()
{
    int i,n;
    printf("Enter number of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}

void sort(int brr[],int n)
{
    int i,j,temp;
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j<n; j++)
        {
            if (brr[i]>brr[j])
            {
                temp = brr[i];
                brr[i] = brr[j];
                brr[j] = temp;
            }
            
        }
        
    }
    printf("The sorted array is\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",brr[i]);
    }
    
}