// 1. Write a function to swap values of two in variables of calling function. (TSRS)

#include<stdio.h>
void swap(int*, int*);
int main()
{
    int num1,num2;
    printf("Enter two values: ");
    scanf("%d%d",&num1,&num2);
    swap(&num1,&num2);
    printf("num1 = %d and num2= %d",num1,num2);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}