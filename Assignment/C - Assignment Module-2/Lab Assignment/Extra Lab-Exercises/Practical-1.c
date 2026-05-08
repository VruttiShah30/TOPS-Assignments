/*
Enter first number: 10
Enter operator (+, -, *, /, %): *
Enter second number: 5

Result = 50
*/
#include<stdio.h>

int main()
{
    int num1, num2;
    char op;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform operation
    switch(op)
    {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            printf("Result = %d", num1 / num2);
            break;

        case '%':
            printf("Result = %d", num1 % num2);
            break;

        // Invalid operator handling
        default:
            printf("Invalid Operator");
    }

    return 0;
}
