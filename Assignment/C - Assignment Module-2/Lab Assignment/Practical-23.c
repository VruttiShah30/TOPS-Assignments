/*
Enter 5 numbers:
45 12 78 23 10

Ascending Order:
10 12 23 45 78

Descending Order:
78 45 23 12 10
*/

#include<stdio.h>

int main()
{
    int arr[5], i, j, temp;

    // Input array elements
    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Ascending Order
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display ascending order
    printf("\nAscending Order:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Descending Order
    for(i = 0; i < 5; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display descending order
    printf("\n\nDescending Order:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
