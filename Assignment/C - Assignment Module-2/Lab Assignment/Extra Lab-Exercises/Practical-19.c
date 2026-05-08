/*
Enter a string: madam
String is Palindrome
*/

#include <stdio.h>
#include <string.h>

int isPalindromeString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while(i < j) {
        if(str[i] != str[j]) {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    if(isPalindromeString(str))
        printf("String is Palindrome\n");
    else
        printf("String is NOT Palindrome\n");

    return 0;
}
