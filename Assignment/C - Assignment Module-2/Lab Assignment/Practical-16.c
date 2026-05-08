/*
Using break statement:
1 2 3 4

Using continue statement:
1 2 4 5 6 7 8 9 10
*/
#include<stdio.h>

int main()
{
    int i;

    // Using break statement
    printf("Using break statement:\n");

    for(i = 1; i <= 10; i++)
    {
        if(i == 5)
        {
            break;
        }

        printf("%d ", i);
    }

    // Using continue statement
    printf("\n\nUsing continue statement:\n");

    for(i = 1; i <= 10; i++)
    {
        if(i == 3)
        {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}
