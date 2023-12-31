// // WAF to first N naturl number(TSRN)


// #include<stdio.h>
// int main()
// {
//     int t;
//     printf("Enter the term: ");
//     scanf("%d",&t);
//     for (int i = 1; i <= t; i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }

#include<stdio.h>
void natural(int);
int main(){
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    natural(t);
    return 0;
}

void natural(int x){
    for (int i = 1; i <= x; i++)
    {
        printf("%d ",i);
    }
}