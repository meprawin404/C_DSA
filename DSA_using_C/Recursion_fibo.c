#include<stdio.h>
int fibo(int term){
    if(term==1 || term ==2){
        return 1;
    }
    return(fibo(term-1)+fibo(term-2));
}

int main()
{
    printf("The fibo of nth term is %d",fibo(6));
    return 0;
}