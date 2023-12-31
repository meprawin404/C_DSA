// 3. Write a function to check whether a given number is Prime or not. (TSRS)
// #include<stdio.h>
// int main()
// {
//     int num,flag=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for (int i = 2; i < num; i++)
//     {
//         if (num%i==0)
//         {
//             flag = 1;
//             break;
//         }
        
//     }
//     if (flag==1)
//     {
//         printf("%d isn't prime number",num);
//     }
//     else{
//         printf("%d is prime number",num);
//     }
//     return 0;
// }

#include<stdio.h>
int is_prime(int);
int main(){
    int num,result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = is_prime(num);
    if (result==1)
    {
        printf("%d isn't prime number",num);
    }
    else
    {
        printf("%d is prime number",num);
    }
    return 0;
    
}

int is_prime(int x){
    int flag = 0;
    for (int i = 2; i < x; i++)
    {
        if (x%i==0)
        {
            flag=1;
            return 1;
        }
        
    }
    return 0;
    
}