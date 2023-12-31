#include <stdio.h>

int main()
{
    // Declare variables
    float num1, num2, result;
    char choice;

    do {
        // Display menu
        printf("\nPlease choose an operation:\n");
        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n");

        // Take input from user
        printf("\nEnter choice (a, b, c, d, e): ");
        scanf(" %c", &choice);

        // Perform the chosen operation
        switch (choice) {
            case 'a':
                printf("\nEnter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = num1 + num2;
                printf("\nResult: %.2f\n", result);
                break;

            case 'b':
                printf("\nEnter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = num1 - num2;
                printf("\nResult: %.2f\n", result);
                break;

            case 'c':
                printf("\nEnter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = num1 * num2;
                printf("\nResult: %.2f\n", result);
                break;

            case 'd':
                printf("\nEnter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("\nError: division by zero\n");
                } else {
                    result = num1 / num2;
                    printf("\nResult: %.2f\n", result);
                }
                break;

            case 'e':
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice. Please try again.\n");
        }

    } while (choice != 'e');

    return 0;
}