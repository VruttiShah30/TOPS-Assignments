/*
Enter a number: -1562
Max number is 6

*/

#include <stdio.h>

int main() {
    int num, digit, max;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    max = 0;

    while (num > 0) {
        digit = num % 10;   // extract last digit

        if (digit > max) {
            max = digit;
        }

        num = num / 10;     // remove last digit
    }

    printf("Max number is %d\n", max);

    return 0;
}
