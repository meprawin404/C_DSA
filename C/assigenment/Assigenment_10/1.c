// WAP a functin to calculate area of a circle (TSRS)
#include<stdio.h>
float area(float);
int main()
{
    float a,r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    a = area(r);
    printf("The area of circle is %.2f",a);
    return 0;
}

float area(float r)
{
    float const pi = 3.14;
    float ar = pi*r*r;
    return ar;
}