/*
Enter number 1: 10
Enter number 2: 5
Enter number 3: 8
Enter number 4: 7
Enter number 5: 2
Enter number 6: 9
Enter number 7: 4
Enter number 8: 1
Enter number 9: 6
Enter number 10: 3

Total Even Numbers = 5
Total Odd Numbers = 5
Sum of Even Numbers = 30
Sum of Odd Numbers = 25
*/
#include<stdio.h>

int main()
{
    int num, i;
    int evenCount = 0, oddCount = 0;
    int evenSum = 0, oddSum = 0;

    // Input 10 numbers
    for(i = 1; i <= 10; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Check even or odd
        if(num % 2 == 0)
        {
            evenCount++;
            evenSum += num;
        }
        else
        {
            oddCount++;
            oddSum += num;
        }
    }

    // Display results
    printf("\nTotal Even Numbers = %d\n", evenCount);
    printf("Total Odd Numbers = %d\n", oddCount);
    printf("Sum of Even Numbers = %d\n", evenSum);
    printf("Sum of Odd Numbers = %d\n", oddSum);

    return 0;
}
