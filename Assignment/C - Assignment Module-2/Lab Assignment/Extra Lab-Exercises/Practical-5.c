/*
Enter temperature in centigrade: 25
Normal Temperature
*/
#include<stdio.h>

int main()
{
    float temp;

    // Input temperature
    printf("Enter temperature in centigrade: ");
    scanf("%f", &temp);

    // Check conditions
    if(temp < 0)
    {
        printf("Freezing weather");
    }
    else if(temp >= 0 && temp < 10)
    {
        printf("Very Cold weather");
    }
    else if(temp >= 10 && temp < 20)
    {
        printf("Cold weather");
    }
    else if(temp >= 20 && temp < 30)
    {
        printf("Normal Temperature");
    }
    else if(temp >= 30 && temp < 40)
    {
        printf("Hot weather");
    }
    else
    {
        printf("Very Hot weather");
    }

    return 0;
}
