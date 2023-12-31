// 11. Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349)


#include<stdio.h>
int main()
{
    int n,n1,result=0;
    printf("Enter a number and another number that need to be appended: ");
    scanf("%d%d",&n,&n1);
    result = (n*10)+n1;
    printf("The number after appended is %d",result);
    return 0;
}