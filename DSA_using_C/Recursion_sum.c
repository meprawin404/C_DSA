#include<stdio.h>
int main()
{
    int result;
    result = sum(3);
    printf("The sum of n natural is %d",result);
    return 0;
}

int sum(int num){
    if(num==1){
        return 1;
    }
    int s;
    s = num+sum(num-1);
    return s;
}