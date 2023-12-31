// 10. Write a program to make the last digit of a number stored in a variable as zero. 
// (Example - if x=2345 then make it x=2340) 

#include<stdio.h>
int main()
{
    int n=2345;
    int qut;
    qut = n/10;
    qut = qut*10;
    printf("The number with last digit stored as 0 is %d",qut);
    return 0;

}