// write a function to calculate simpel intrest(TSRS)
#include<stdio.h>
float simple_inst(float,float,float);
int main()
{
    float p,t,r;
    float cal_si;
    printf("Enter time, principle amount and rate of intrest: ");
    scanf("%f%f%f",&p,&t,&r);
    cal_si = simple_inst(p,t,r);
    printf("The simple intrest is %.2f",cal_si);
    return 0;
}

float simple_inst(float x,float y, float z)
{
    float si = (x*y*z)/100;
    return si;
}