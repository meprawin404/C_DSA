// program to find avg of 100 numbers using array
#include<stdio.h>
int main()
{
    int a[5],sum=0;
    float avg;
    printf("Enter five numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    avg = sum / 5.0;
    printf("The avrage of 5 number is %f",avg);
    return 0;
}