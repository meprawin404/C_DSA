// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, result;
    char choice;
    while (1)
    {
        printf("\nPlease choose an operation\n");
        printf("a.addition\n");
        printf("b.difference\n");
        printf("c.multiplaction\n");
        printf("d.division\n");
        printf("e.exit\n");
        printf("Enter ur choice: \n");
        scanf(" %c", &choice);
        switch (choice)
        {
        case 'a':
            printf("Enter 1st number: ");
            scanf("%d", &num1);
            printf("Enter second number: ");
            scanf("%d", &num2);
            result = num1 + num2;
            printf("The result of sum is %d", result);
            break;
        case 'b':
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 - num2;
            printf("The result of difference is %d", result);
            break;

        case 'c':
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            result = num1 * num2;
            printf("The product of two number is %d", result);
            break;

        case 'd':
            printf("Enter two numbers: ");
            scanf("%d%d", &num1, &num2);
            float result = (float)num1 / num2;
            printf("The result of division is %.2f", result);
            break;

        case 'e':
            printf("Exiting programming...");
            exit(0);

        default:
            printf("Enter valid input\n");
        }
    }
    return 0;
}