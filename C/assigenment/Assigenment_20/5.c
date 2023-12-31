// 5. Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>
int max(int *, int *);
int main()
{
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    printf("%d is greater of two number",max(&num1,&num2));
    return 0;
}

int max(int *x, int *y)
{
    if (*x > *y)
    {
        return *x;
    }
    else
    {
        return *y;
    }
}