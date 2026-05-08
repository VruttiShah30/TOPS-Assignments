/*
Enter N: 6

Nth Fibonacci (Recursive) = 8
Nth Fibonacci (Iterative) = 8

Comparison:
- Recursive: Slow (repeated calculations, exponential time)
- Iterative: Fast (single loop, linear time)
*/

#include <stdio.h>

// Recursive method
int fibRecursive(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibRecursive(n - 1) + fibRecursive(n - 2);
}

// Iterative method
int fibIterative(int n) {
    int a = 0, b = 1, c, i;

    if(n == 0) return 0;
    if(n == 1) return 1;

    for(i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("\nNth Fibonacci (Recursive) = %d\n", fibRecursive(n));
    printf("Nth Fibonacci (Iterative) = %d\n", fibIterative(n));

    printf("\nComparison:\n");
    printf("- Recursive: Slow (repeated calculations, exponential time)\n");
    printf("- Iterative: Fast (single loop, linear time)\n");

    return 0;
}
