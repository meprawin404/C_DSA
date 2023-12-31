#include<stdio.h>
int length(char *);
int main(){
    char str[10];
    printf("Enter ur name: ");
    fgets(str,10,stdin);
    int l;
    l = length(str);
    printf("The lenght of string is %d",l);
    return 0;
}

int length(char *p){
    int i;
    for ( i = 0; *(p+i); i++);
    return i;
    
}