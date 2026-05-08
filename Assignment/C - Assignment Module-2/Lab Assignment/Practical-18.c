/*
Enter a number: 153

Using While Loop: 153 is an Armstrong Number
Using For Loop: 153 is an Armstrong Number
*/

#include<stdio.h>

int main()
{
    int num, temp, rem, sum1 = 0, sum2 = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Armstrong using while loop
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        sum1 = sum1 + (rem * rem * rem);
        temp = temp / 10;
    }

    // Armstrong using for loop
    temp = num;

    for( ; temp != 0; temp = temp / 10)
    {
        rem = temp % 10;
        sum2 = sum2 + (rem * rem * rem);
    }

    // Result for while loop
    if(sum1 == num)
    {
        printf("\nUsing While Loop: %d is an Armstrong Number\n", num);
    }
    else
    {
        printf("\nUsing While Loop: %d is not an Armstrong Number\n", num);
    }

    // Result for for loop
    if(sum2 == num)
    {
        printf("Using For Loop: %d is an Armstrong Number\n", num);
    }
    else
    {
        printf("Using For Loop: %d is not an Armstrong Number\n", num);
    }

    return 0;
}
