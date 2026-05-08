/*
Enter a number: 64728

Sum of digits = 27
Reverse number = 82746
*/
#include<stdio.h>

int main()
{
    int num, temp, digit, sum = 0, reverse = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of digits and reverse number
    while(temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    // Display results
    printf("Sum of digits = %d\n", sum);
    printf("Reverse number = %d\n", reverse);

    return 0;
}
