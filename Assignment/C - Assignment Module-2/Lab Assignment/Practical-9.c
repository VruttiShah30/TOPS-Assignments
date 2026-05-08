/*
Enter a number: 8
8 is Even

Enter month number (1-12): 3
March
*/
#include<stdio.h>

int main()
{
    int num, month;

    // Check Even or Odd
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }

    // Display Month Name
    printf("\nEnter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("January");
            break;

        case 2:
            printf("February");
            break;

        case 3:
            printf("March");
            break;

        case 4:
            printf("April");
            break;

        case 5:
            printf("May");
            break;

        case 6:
            printf("June");
            break;

        case 7:
            printf("July");
            break;

        case 8:
            printf("August");
            break;

        case 9:
            printf("September");
            break;

        case 10:
            printf("October");
            break;

        case 11:
            printf("November");
            break;

        case 12:
            printf("December");
            break;

        default:
            printf("Invalid Month Number");
    }

    return 0;
}
