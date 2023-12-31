// 4. Write a function to transform string into uppercase

#include<stdio.h>
#include<ctype.h>
#include<string.h>
void upper(char []);
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s",p);
    upper(p);
    return 0;
}

void upper(char a[]){
    // int i;
    // for ( i = 0; a[i]; i++)
    // {
    //     printf("%c",toupper(a[i]));
    // }

    // or 

    printf("%s",strupr(a));
    
}