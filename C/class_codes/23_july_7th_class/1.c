#include<stdio.h>
int main()
{
    a();
    b();
    a();
    return 0;
}

a()
{
    printf("Hello\n");
}

b()
{
    printf("Bye\n");
    a();
}