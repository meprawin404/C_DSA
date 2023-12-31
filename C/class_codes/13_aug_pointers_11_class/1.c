#include<stdio.h>
int main()
{
    int x = 5;
    printf("%d\n",&x);  // give the address of x
    printf("%p\n",&x);  // gives the address of x in hexa
    printf("%d\n",*&x);    /* == printf("%d",x); address of operator will give the 
    address of x to the dereferencing operator which will print
    the value of x in that address*/ 


    return 0;
}