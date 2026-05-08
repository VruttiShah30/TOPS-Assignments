/*
Enter number of rows: 5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>

// Function to calculate value using recursion logic (nCr concept)
int value(int n, int r) {
    if(r == 0 || r == n)
        return 1;
    else
        return value(n - 1, r - 1) + value(n - 1, r);
}

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        // spacing
        for(space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        for(j = 0; j <= i; j++) {
            printf("%d ", value(i, j));
        }

        printf("\n");
    }

    return 0;
}
