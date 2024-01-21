#include<stdio.h>
int main()
{
    printf("The answer is %d",fact(5));
    return 0;
}

// int fact(int num){
//     int f;
//     if (num==1)
//     {
//         return num;
//     }
//     f = num * fact(num-1);
// }

// or 

int fact(int num){
    if (num>0)
    {
        return(num*fact(num-1));
    }
    else{
        return 1;
    }
}