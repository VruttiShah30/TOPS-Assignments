/*
Enter a string: hello
Reversed string: olleh
*/
#include <stdio.h>

// Function to reverse string
void reverseString(char str[]) {
    int i = 0, j = 0;
    char temp;

    // Find length manually (no strlen)
    while(str[j] != '\0') {
        j++;
    }
    j = j - 1; // last valid index

    // Reverse logic
    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // reads single word

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
