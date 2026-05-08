/*
Enter 5 numbers:
10
20
30
40
50

Stored Numbers are:
10 20 30 40 50
*/
#include<stdio.h>

int main()
{
    int arr[5];
    int i;

    // Accept numbers from user
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("\nStored Numbers are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
