/*
Age = 20
Grade = A
Marks = 85.50
Value of PI = 3.14
*/


#include<stdio.h>

int main()
{
    // Variable declarations
    int age = 20;
    char grade = 'A';
    float marks = 85.5;

    // Constant declaration
    const float PI = 3.14;

    /* Displaying values
       using printf function */
    
    printf("Age = %d\n", age);
    printf("Grade = %c\n", grade);
    printf("Marks = %.2f\n", marks);
    printf("Value of PI = %.2f\n", PI);

    return 0;
}
