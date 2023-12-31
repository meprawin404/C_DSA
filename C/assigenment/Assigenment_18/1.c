// 1. Write a function to calculate length of the string

#include<stdio.h>
#include<string.h>
int strLenth(char []);
int main()
{
    char p[50];
    printf("Enter the string: ");
    scanf("%s",&p);
    int result;
    result = strLenth(p);
    printf("The length of string is %d",result);
    return 0;
}

int strLenth(char y[]){
    int i;
    // for ( i = 0; y[i]; i++);
    // return i;

    // or 
    return strlen(y);

}