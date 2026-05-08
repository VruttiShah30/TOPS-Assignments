/*
Enter 5 numbers:
10
20
30
40
50

Numbers in Reverse Order:
50 40 30 20 10
*/
#include<stdio.h>

int main()
{
    int arr[5];
    int i;

    // Input 5 numbers
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display numbers in reverse order
    printf("\nNumbers in Reverse Order:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
