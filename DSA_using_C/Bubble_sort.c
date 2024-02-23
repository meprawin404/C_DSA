#include<stdio.h>
void bubble_sort(int A[], int N);

int main()
{
    int arr[] = {23,56,2,45,33,12};
    bubble_sort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void bubble_sort(int A[],int N){
    int i,temp,round;
    for ( round = 0; round < N-1; round++)
    {
        for ( i = 0; i < N-1-round; i++)
        {
            if (A[i]>A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
    }    
}
