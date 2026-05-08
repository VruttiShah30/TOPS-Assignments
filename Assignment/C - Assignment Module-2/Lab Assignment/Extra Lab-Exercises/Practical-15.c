/*
Enter number of terms: 7
Fibonacci series:
0 1 1 2 3 5 8
*/

#include <stdio.h>

int fib(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");

    for(i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
