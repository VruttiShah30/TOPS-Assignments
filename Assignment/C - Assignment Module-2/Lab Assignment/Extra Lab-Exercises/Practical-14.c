/*

Enter how many numbers (N): 5
Enter 5 numbers:
10 20 30 40 50


Sum of array elements = 150.00
Average of array elements = 30.00

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter how many numbers (N): ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   // add each element to sum
    }

    avg = sum / n;  // calculate average

    printf("\nSum of array elements = %.2f\n", sum);
    printf("Average of array elements = %.2f\n", avg);

    return 0;
}
