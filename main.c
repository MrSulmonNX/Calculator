#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

int main() {

    printf("Calculator made by @MrSulomonNX\n");

    for (;;) {



        double num1, num2, result;
        char operator;

        printf("Please enter a formula (example: 1 + 2): ");

        if (scanf("%lf %c %lf", &num1, &operator, &num2) != 3) {
            printf("Input format is incorrect.\n");
            printf("\n");
            return 1;
        }

        switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            }
            else {
                printf("Cannot be divided by zero...\n");
                printf("\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator.\n");
            printf("\n");
            return 1;
        }
        printf("\n");
        printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
        printf("\n");
        printf("Thank you for using this software.\n");
        printf("\n");
        printf("Press Ctrl + C to exit...\n");
        printf("\n");
        printf("\n");
    };

    return 0;
}
