// // Write a program to print unit digit of a given number
// #include<stdio.h>
// int main()
// {
//     int num,rslt;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     rslt = num%10;
//     printf("The unit digit is %d",rslt);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char str[] = "ENGINEERING";
//     int i,j;
//     for ( i = 0; i <= 11 ; i++)
//     {
//         for ( j = 11; j>=i; j--)
//         {
//             printf("%c",str[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



#include <stdio.h>

int main() {
    char* str = "ENGINEERING";
    int i, j;
    for (i = 0; i <= 10; i++) {
        for (j = i; j <= 10; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}
