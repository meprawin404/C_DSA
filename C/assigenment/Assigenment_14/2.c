// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.

#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number of elemets: ");
    scanf("%d",&n);
    float arr[n],sum,avg;
    printf("Enter the %d elements of arry: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%f",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("The sum of all elements is %.2f\n",sum);
    printf("The average of the array is %.2f",avg);
    return 0;

}