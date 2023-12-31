// WAP to find the area of the circle. Take radius of circle from user as input and print the 
// result in below given format.
#include<stdio.h>
int main()
{
    float r,a;
    printf("Enter the radius of circule: ");
    scanf("%f",&r);                    
    a = 3.14*(r*r);             // area = π · r2
    printf("The area of circule is %.2f",a);
    return 0;
    
}