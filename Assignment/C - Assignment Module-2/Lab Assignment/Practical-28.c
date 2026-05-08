#include<stdio.h>

// User-defined function
void joinString(char str1[], char str2[])
{
    int i, j;

    // Find end of first string
    for(i = 0; str1[i] != '\0'; i++);

    // Copy second string into first string
    for(j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }

    // Add null character at end
    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[100];

    // Input strings
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // Function call
    joinString(str1, str2);

    // Display joined string
    printf("\nJoined String = %s", str1);

    return 0;
}
