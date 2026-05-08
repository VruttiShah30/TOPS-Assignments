/*
Enter a string: Hello

Length of String = 5

*/

#include<stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);

    // Calculate length manually
    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    // Display length
    printf("Length of String = %d", length);

    return 0;
}
