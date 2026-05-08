/*
Enter a number: 153
Armstrong Number
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // count digits
    while(original != 0) {
        original = original / 10;
        n++;
    }

    original = num;

    // calculate sum of power of digits
    while(original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original = original / 10;
    }

    if(result == num)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
