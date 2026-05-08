/*
Enter three numbers: 10 25 15

Choose method:
1. Using if-else
2. Using switch-case
Enter choice: 1

Largest = 25
Smallest = 10
*/

#include<stdio.h>

int main()
{
    int a, b, c, choice;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nChoose method:\n");
    printf("1. Using if-else\n");
    printf("2. Using switch-case\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // Using if-else
            if(a > b && a > c)
                printf("Largest = %d\n", a);
            else if(b > a && b > c)
                printf("Largest = %d\n", b);
            else
                printf("Largest = %d\n", c);

            if(a < b && a < c)
                printf("Smallest = %d\n", a);
            else if(b < a && b < c)
                printf("Smallest = %d\n", b);
            else
                printf("Smallest = %d\n", c);
            break;

        case 2:
            // Using switch-case (based on conditions)
            switch(a > b && a > c)
            {
                case 1:
                    printf("Largest = %d\n", a);
                    break;
                default:
                    switch(b > c)
                    {
                        case 1:
                            printf("Largest = %d\n", b);
                            break;
                        default:
                            printf("Largest = %d\n", c);
                    }
            }

            switch(a < b && a < c)
            {
                case 1:
                    printf("Smallest = %d\n", a);
                    break;
                default:
                    switch(b < c)
                    {
                        case 1:
                            printf("Smallest = %d\n", b);
                            break;
                        default:
                            printf("Smallest = %d\n", c);
                    }
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}

