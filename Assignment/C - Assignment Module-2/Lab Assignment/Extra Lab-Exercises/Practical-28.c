/*

Enter a number: 10
Prime numbers up to 10 are:
2 3 5 7 

Sum of prime numbers = 17
*/

#include <stdio.h>

int isPrime(int num) {
    int i;

    if(num <= 1)
        return 0;

    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for(i = 2; i <= n; i++) {
        if(isPrime(i)) {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\n\nSum of prime numbers = %d\n", sum);

    return 0;
}
