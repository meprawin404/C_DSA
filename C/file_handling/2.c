#include<stdio.h>
int main()
{
    FILE *ptr;
    char string[30] = "prawin";
    ptr = fopen("1.txt","w");
    fprintf(ptr,"%s",string);
    fclose(ptr);
    return 0;

}