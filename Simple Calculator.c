#include <stdio.h>
int main()
{
    char operator;
    double num1, num2;
    char choice;
    printf("Welcome to the Calculator!\n");
    do
    {
        printf("Enter an operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        switch (operator)
        {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.");
            break;
        case '%':
            if (num2 != 0)
                printf("%.2lf %% %.2lf = %.2lf", num1, num2, (int)num1 % (int)num2);
            else
                printf("Error! Modulo by zero.");
            break;
        default:

            printf("Error! Operator is not correct");
        }
        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for using the Calculator. Goodbye!");
    return 0;
}