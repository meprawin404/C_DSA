#include<stdio.h>
void bubble_sort(int A[], int N);

int main()
{
    int arr[] = {2,5,3};
    bubble_sort(arr,3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}

void bubble_sort(int A[],int N){
    int i,temp,round,flag;
    for ( round = 0; round < N-1; round++)
    {
        flag = 0;
        for ( i = 0; i < N-1-round; i++)
        {
            if (A[i]>A[i+1])
            {
                flag = 1;
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }

        if (flag == 0)
        {
            printf("rounds %d\n",round);
            return;
        }
    }
}
