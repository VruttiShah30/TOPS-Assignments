#include<stdio.h>
/*
Enter side of square: 4
Area of Square = 16.00
Surface Area of Cube = 96.00
Enter base of triangle: 5
Enter height of triangle: 6
Area of Triangle = 15.00
*/

int main()
{
    float side, squareArea, cubeArea;
    float base, height, triangleArea;

    // Area of Square
    printf("Enter side of square: ");
    scanf("%f", &side);

    squareArea = side * side;

    printf("Area of Square = %.2f\n", squareArea);

    // Surface Area of Cube
    cubeArea = 6 * side * side;

    printf("Surface Area of Cube = %.2f\n", cubeArea);

    // Area of Triangle
    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    triangleArea = 0.5 * base * height;

    printf("Area of Triangle = %.2f\n", triangleArea);

    return 0;
}
