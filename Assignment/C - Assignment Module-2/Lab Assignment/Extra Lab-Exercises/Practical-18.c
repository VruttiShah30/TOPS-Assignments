/*
Enter a number: 121
Number is Palindrome
*/

#include <stdio.h>

int isPalindromeNumber(int num) {
    int original = num, reverse = 0, digit;

    while(num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if(original == reverse)
        return 1;
    else
        return 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindromeNumber(num))
        printf("Number is Palindrome\n");
    else
        printf("Number is NOT Palindrome\n");

    return 0;
}
