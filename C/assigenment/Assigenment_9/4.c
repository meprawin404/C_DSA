// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
//    isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of     sides of a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
//     or not
// d. Exit

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    char choice;
    while (1)
    {
        printf("\nPlease choose an operation\n");
        printf("a. check whether triangle is isosceles or not\n");
        printf("b. check whethe triangle is right angled or not\n");
        printf("c. check whethe triangle is equilateral or not\n");
        printf("d. exit\n");
        printf("Enter ur choice: ");
        scanf(" %c", &choice);
        switch (choice)
        {
            case 'a':
                printf("Enter three sides of triangle: ");
                scanf("%d%d%d", &a, &b, &c);
                if (a == b || b == c || a == c)
                {
                    printf("The triangle is isosceles");
                }
                else
                    printf("Not isosceles triangle");
                break;

            case 'b':
                printf("Enter three sides of triangle: ");
                scanf("%d%d%d", &a, &b, &c);
                if (a > b && a > c)
                {
                    if (a * a == (b * b + c * c))
                    {
                        printf("The triangle is right angled triangel");
                    }
                    else
                        printf("The triangle isn't right angled triangel");
                }
                else if (b > a && b > c)
                {
                    if (b * b == (a * a + c * c))
                    {
                        printf("The triangle is right angled triangel");
                    }
                    else
                    {
                        printf("The triangle isn't right angled triangel");
                    }
                }
                else
                {
                    if (c * c == (a * a + b * b))
                    {
                        printf("The triangle is right angled triangel");
                    }
                    else
                    {
                        printf("The triangle isn't right angled triangel");
                    }
                }
            
                break;
            case 'c':
                printf("Enter three sides of triangle: ");
                scanf("%d%d%d", &a, &b, &c);
                if (a == b && b == c)
                {
                    printf("The triangle is equilateral triangle");
                }
                else
                {
                    printf("The triangle isn't equilateral triangle");
                }
                break;

            case 'd':
                printf("Exiting program...");
                exit(0);
                break;

            default:
                printf("Enter valid input");
        }
    }
    return 0;
}
