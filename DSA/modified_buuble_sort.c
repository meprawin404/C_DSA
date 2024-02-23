#include<stdio.h>
int main()
{
    int arr[] = {3,2,5};
    int i,j,flag = 0;
    int n = 3;
    for ( i = n-1; i >= 0; i--)
    {
        flag = 0;
        for ( j = 0; j<i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                flag = 1;
                int temp = arr[j];
                arr[j+1] = arr[j];
                arr[j+1] = temp;
            }
            
        }
        if (flag==0)
        {
            break;
        }
    }
    return 0;
}