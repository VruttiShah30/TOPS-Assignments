/*
Enter 10 integers:
12 5 78 3 45 90 2 33 18 60

Maximum value = 90
Minimum value = 2
Sorted array (Ascending order): 2 3 5 12 18 33 45 60 78 90
*/

#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min, temp;

    // Input 10 integers
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = arr[0];
    min = arr[0];

    // Find max and min
    for(i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Sorting in ascending order (Bubble Sort)
    for(i = 0; i < 9; i++) {
        for(int j = 0; j < 9 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Output results
    printf("\nMaximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    printf("Sorted array (Ascending order): ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
