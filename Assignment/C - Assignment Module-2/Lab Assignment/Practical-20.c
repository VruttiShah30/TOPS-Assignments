/*
Enter a number: 5
Factorial = 120
*/
#include<stdio.h>

// Function Declaration
int factorial(int);

int main()
{
    int num, result;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function Call
    result = factorial(num);

    // Display result
    printf("Factorial = %d", result);

    return 0;
}

// Function Definition
int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
