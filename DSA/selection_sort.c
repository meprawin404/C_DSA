#include<stdio.h>
int main()
{
    int arr[] = {23,21,45,67,8,11};
    int i,j,temp,min_index,n=6;
    for ( i = 0; i < n-1; i++)
    {
        min_index = i;
        for ( j = i+1; j<n ; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
            
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
        
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
