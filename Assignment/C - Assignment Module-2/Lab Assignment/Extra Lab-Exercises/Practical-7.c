/*
Enter a number: 5
Enter range (N): 10

5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
*/
#include<stdio.h>

int main()
{
    int num, n, i;

    // Input number and range
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter range (N): ");
    scanf("%d", &n);

    // Print multiplication table
    for(i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
