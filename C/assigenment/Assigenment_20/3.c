// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
 
#include<stdio.h>
void sort(int *,int);
int main()
{
    int arr[5];
    printf("Enter the elements of arry: ");
    int i;
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(&arr,5);
    printf("The sorted array is\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
    
}

void sort(int *arr, int size)
{
    int temp;
    int i,j;
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    
}