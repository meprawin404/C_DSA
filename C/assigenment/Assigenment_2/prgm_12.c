#include<stdio.h>
int main()
{
    float INR,USD;
    printf("Enter amount in INR: ");
    scanf("%f",&INR);
    USD = INR/76.23;
    printf("The amount in USD is %f",USD);
    return 0;
}