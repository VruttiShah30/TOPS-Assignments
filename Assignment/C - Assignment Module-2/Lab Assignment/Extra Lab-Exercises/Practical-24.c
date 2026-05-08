/*

Armstrong numbers between 1 and 1000:
1 2 3 4 5 6 7 8 9 153 370 371 407

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result;
    int n;

    printf("Armstrong numbers between 1 and 1000:\n");

    for(num = 1; num <= 1000; num++) {
        original = num;
        result = 0;
        n = 0;

        // count digits
        int temp = original;
        while(temp != 0) {
            temp = temp / 10;
            n++;
        }

        temp = original;

        // sum of powers
        while(temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp = temp / 10;
        }

        if(result == num) {
            printf("%d ", num);
        }
    }

    return 0;
}
