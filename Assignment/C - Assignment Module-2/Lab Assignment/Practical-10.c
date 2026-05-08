/*
Enter three numbers: 10 25 15
Maximum number = 25
*/
#include<stdio.h>

int main()
{
    int a, b, c, max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find maximum using ternary operator
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    // Display result
    printf("Maximum number = %d", max);

    return 0;
}
