#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    printf("Enter ur name: ");
    fgets(str,10,stdin);
    strupr(str);
    printf("ur name is %s",str);
    return 0;
    
}