/*
Original Value = 10
Modified Value = 50
*/
#include<stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    // Store address of num in pointer
    ptr = &num;

    // Display original value
    printf("Original Value = %d\n", num);

    // Modify value using pointer
    *ptr = 50;

    // Display modified value
    printf("Modified Value = %d\n", num);

    return 0;
}
