/*
Enter ASCII value: 65
Character = A
*/
#include<stdio.h>

int main()
{
    int ascii;
    char ch;

    // Input ASCII value
    printf("Enter ASCII value: ");
    scanf("%d", &ascii);

    // Convert ASCII to character
    ch = ascii;

    // Display character
    printf("Character = %c", ch);

    return 0;
}
