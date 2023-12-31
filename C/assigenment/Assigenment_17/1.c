// 1. Write a program to calculate the length of the string. (without using built-in method)

// #include<stdio.h> 
// int main()
// {
//     char p[] = "prawin";
//     int i;
//     for ( i = 0; p[i]; i++);
//     printf("The lenth of sting is %d",i);
//     return 0;
    
// }

#include<stdio.h>
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s", p);
    int i;
    for (i = 0; p[i]; i++);
    printf("The length of string is %d", i);
    return 0;
}
