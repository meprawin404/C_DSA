#include<stdio.h>
int main()
{
    FILE *prt = NULL;
    char string[30];
    prt = fopen("1.txt","r");
    fscanf(prt,"%s",string);
    printf("The content of this file is %s",string);
    fclose(prt);
    return 0;

}