/*
Enter a number: 64728
Reverse Number = 82746
*/
#include<stdio.h>

int main()
{
    int num, reverse = 0, rem;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    // Display reversed number
    printf("Reverse Number = %d", reverse);

    return 0;
}
