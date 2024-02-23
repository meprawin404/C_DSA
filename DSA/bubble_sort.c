#include<stdio.h>
int main()
{
    int arr[] = {23,4,1,22,10,5,11,19};
    int i,j,n=8;
    for ( i = n-1; i >= 0; i--)
    {
        for ( j = 0; j < i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }

    printf("shorted array is\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}