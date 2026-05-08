/*
Enter number of rows: 5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/

#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        // Print spaces for alignment
        for(space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        int val = 1;

        for(j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
