/*
Enter Cost Price: 500
Enter Selling Price: 650
Profit = 150.00
*/
#include<stdio.h>

int main()
{
    float costPrice, sellingPrice, profit, loss;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if(sellingPrice > costPrice)
    {
        profit = sellingPrice - costPrice;
        printf("Profit = %.2f", profit);
    }
    else if(costPrice > sellingPrice)
    {
        loss = costPrice - sellingPrice;
        printf("Loss = %.2f", loss);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
