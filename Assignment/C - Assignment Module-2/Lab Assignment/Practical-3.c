/*

Enter first number: 10
Enter second number: 5

Arithmetic Operations:
Addition = 15
Subtraction = 5
Multiplication = 50
Division = 2
Modulus = 0

Relational Operations:
a == b : 0
a != b : 1
a > b  : 1
a < b  : 0
a >= b : 1
a <= b : 0

Logical Operations:
(a > 0 && b > 0) : 1
(a > 0 || b > 0) : 1
!(a > b) : 0

*/
#include<stdio.h>

int main()
{
    int a, b;

    // Accept two integers from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Arithmetic Operations
    printf("\nArithmetic Operations:\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulus = %d\n", a % b);

    // Relational Operations
    printf("\nRelational Operations:\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);

    // Logical Operations
    printf("\nLogical Operations:\n");
    printf("(a > 0 && b > 0) : %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b > 0) : %d\n", (a > 0 || b > 0));
    printf("!(a > b) : %d\n", !(a > b));

    return 0;
}
