/*
Enter radius of circle: 5
Area of Circle = 78.50
Circumference of Circle = 31.40
*/
#include<stdio.h>

int main()
{
    float radius, area, circumference;
    const float PI = 3.14;

    // Input radius
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display result
    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}
