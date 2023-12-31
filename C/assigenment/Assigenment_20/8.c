// 8. Write a program to compute the sum of all elements in an array using pointers.

#include<stdio.h>
int sum(int *,int);
int main()
{
    int arr[5];
    printf("Enter the elements of array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The sum of all elements of array is %d",sum(&arr,5));
    return 0;
    
}

int sum(int *rev_arr,int x)
{
    int i,result=0;
    for ( i = 0; i < x; i++)
    {
        result = result + *(rev_arr+i);
    }
    return result;
    
}