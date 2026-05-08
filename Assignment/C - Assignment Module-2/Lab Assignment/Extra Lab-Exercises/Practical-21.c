/*
Enter a string: Hello123@World!


Vowels = 3
Consonants = 7
Digits = 3
Special Characters = 2

*/

#include <stdio.h>

int main() {
    char str[200];
    int i;
    int vowels = 0, consonants = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {

        // Check vowels
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vowels++;
        }

        // Check digits
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }

        // Check alphabets (consonants)
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }

        // Special characters (excluding space and newline)
        else if(str[i] != ' ' && str[i] != '\n') {
            special++;
        }
    }

    printf("\nVowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d\n", special);

    return 0;
}
