/*
Enter a number: 5
Sum of Natural Numbers = 15
*/

#include<stdio.h>

int main()
{
    int n, i = 1, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate sum using while loop
    while(i <= n)
    {
        sum = sum + i;
        i++;
    }

    // Display result
    printf("Sum of Natural Numbers = %d", sum);

    return 0;
}

