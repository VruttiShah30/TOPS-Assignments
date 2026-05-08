/*
Concept : n! = n × (n-1) × (n-2) × ... × 1

Enter a number: 5

Factorial (Recursive) = 120
Factorial (Iterative) = 120

Performance Comparison:
- Recursive: Uses function calls, slower for large numbers
- Iterative: Uses loop, faster and memory efficient

*/

#include <stdio.h>

// Recursive factorial
long long factorialRecursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

// Iterative factorial
long long factorialIterative(int n) {
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nFactorial (Recursive) = %lld\n", factorialRecursive(n));
    printf("Factorial (Iterative) = %lld\n", factorialIterative(n));

    printf("\nPerformance Comparison:\n");
    printf("- Recursive: Uses function calls, slower for large numbers\n");
    printf("- Iterative: Uses loop, faster and memory efficient\n");

    return 0;
}

