/*
Enter 5 integers:
10 20 30 40 50

Elements of One-Dimensional Array:
10 20 30 40 50

Enter elements of 3x3 matrix:
1 2 3
4 5 6
7 8 9

3x3 Matrix:
1 2 3
4 5 6
7 8 9

Sum of all elements = 45
*/
#include<stdio.h>

int main()
{
    int arr[5];
    int matrix[3][3];
    int i, j, sum = 0;

    // One-Dimensional Array
    printf("Enter 5 integers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print 1D array elements
    printf("\nElements of One-Dimensional Array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Two-Dimensional Array Input
    printf("\n\nEnter elements of 3x3 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix and calculate sum
    printf("\n3x3 Matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);

            sum = sum + matrix[i][j];
        }

        printf("\n");
    }

    // Display sum
    printf("\nSum of all elements = %d", sum);

    return 0;
}
