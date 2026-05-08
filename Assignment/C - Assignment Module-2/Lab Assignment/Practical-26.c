/*
Enter first string: Hello
Enter second string: World

Concatenated String = HelloWorld
Length of String = 10
*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];

    // Input first string
    printf("Enter first string: ");
    gets(str1);

    // Input second string
    printf("Enter second string: ");
    gets(str2);

    // Concatenate strings
    strcat(str1, str2);

    // Display concatenated string
    printf("\nConcatenated String = %s", str1);

    // Display string length
    printf("\nLength of String = %d", strlen(str1));

    return 0;
}
