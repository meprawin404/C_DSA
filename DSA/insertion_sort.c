#include<stdio.h>
int main()
{
    int arr[] = {23,21,45,67,8,11};
    int i,n=6;
    for (i = 1; i < n; i++)
    {
        int pivot = arr[i];
        int j = i-1;
        while (arr[j]>pivot && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = pivot;
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
    
}