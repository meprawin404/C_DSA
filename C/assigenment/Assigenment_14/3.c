// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int n,i,O_sum=0,E_sum=0;
    printf("Enter the number of elemet: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the %d elements of array: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            E_sum = E_sum + arr[i];
        }
        else
        {
            O_sum = O_sum + arr[i];
        }
    }

    printf("The sum of all even number in array is %d\n",E_sum);
    printf("The sum of all odd numbers in array is %d\n",O_sum);
    return 0;
    
}