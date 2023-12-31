#include<stdio.h>
int main()
{
    FILE *ptr;
    char string[30] = " yadav";
    ptr = fopen("1.txt","a");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;
}