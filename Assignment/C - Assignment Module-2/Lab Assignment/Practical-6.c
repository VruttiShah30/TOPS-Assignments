/*
Enter number of students: 10
Total apples required = 50
*/
#include<stdio.h>

int main()
{
    int students, apples;

    // Accept number of students
    printf("Enter number of students: ");
    scanf("%d", &students);

    // Calculate total apples
    apples = students * 5;

    // Display result
    printf("Total apples required = %d", apples);

    return 0;
}
