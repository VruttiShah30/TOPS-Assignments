/*
Enter a sentence:
I love programming in C language


Number of words = 5
Longest word = programming
*/

#include <stdio.h>

int main() {
    char str[300];
    int i = 0;

    int wordCount = 0;
    int maxLen = 0, currentLen = 0;

    char longestWord[100];
    char tempWord[100];
    int t = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {

        // If not space or end of string ? build word
        if(str[i] != ' ' && str[i] != '\n') {
            tempWord[t] = str[i];
            t++;
            currentLen++;
        }
        else {
            if(currentLen > 0) {
                wordCount++;

                tempWord[t] = '\0';

                // Check longest word
                if(currentLen > maxLen) {
                    maxLen = currentLen;

                    // copy tempWord to longestWord
                    int j;
                    for(j = 0; j <= t; j++) {
                        longestWord[j] = tempWord[j];
                    }
                }

                // reset for next word
                t = 0;
                currentLen = 0;
            }
        }

        i++;
    }

    printf("\nNumber of words = %d\n", wordCount);
    printf("Longest word = %s\n", longestWord);

    return 0;
}
