    // Take something returns something
#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,s;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    s = add(x,y);
    printf("The sum is %d",s);
    return 0;
}

int add(int a,int b)
{
    int c;
    c = a+b;
    return c;
}