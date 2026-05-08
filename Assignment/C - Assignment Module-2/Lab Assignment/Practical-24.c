/*
Enter 5 numbers:
12 45 8 67 23

Maximum Element = 67
*/
#include<stdio.h>

int main()
{
    int arr[5], i, max;

    // Input array elements
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assume first element is maximum
    max = arr[0];

    // Find maximum element
    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Display maximum element
    printf("\nMaximum Element = %d", max);

    return 0;
}

