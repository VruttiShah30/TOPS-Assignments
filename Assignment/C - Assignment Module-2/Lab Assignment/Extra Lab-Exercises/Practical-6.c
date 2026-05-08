/*
Enter a number: 10

10 is not Prime

Prime numbers from 1 to 10 are:
2 3 5 7
*/
	#include<stdio.h>

int main()
{
    int n, i, j, flag;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if number is prime
    flag = 0;

    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(n <= 1)
        printf("%d is not Prime\n", n);
    else if(flag == 0)
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);

    // Print all prime numbers from 1 to n
    printf("\nPrime numbers from 1 to %d are:\n", n);

    for(i = 2; i <= n; i++)
    {
        flag = 0;

        for(j = 2; j <= i/2; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
