
#include <stdio.h>

int main()
{
    int sales[4][5];
    int totalSales[4] = {0};
    int productSales[5] = {0};
    float bonus, finalAmount;
    int bestProduct = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter sales for salesman %d, product %d: ", i + 1, j + 1);
            scanf("%d", &sales[i][j]);

            totalSales[i] += sales[i][j];
            productSales[j] += sales[i][j];
        }
    }

    printf("\nTotal Sales per Salesman:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Salesman %d: Rs. %d\n", i + 1, totalSales[i]);
    }

    printf("\nTotal Sales per Product:\n");

    for (int j = 0; j < 5; j++)
    {
        printf("Product %d: Rs. %d\n", j + 1, productSales[j]);
    }

    for (int j = 1; j < 5; j++)
    {
        if (productSales[j] > productSales[bestProduct])
        {
            bestProduct = j;
        }
    }

    printf("\nBest-Selling Product: Product %d\n", bestProduct + 1);
    printf("Total Revenue: Rs. %d\n", productSales[bestProduct]);

    printf("\nFinal Amounts after Bonus:\n");

    for (int i = 0; i < 4; i++)
    {
        if (totalSales[i] > 10000)
        {
            bonus = totalSales[i] * 0.10;
            finalAmount = totalSales[i] + bonus;

            printf("Salesman %d: Bonus = Rs. %.2f, Final Amount = Rs. %.2f\n",
                   i + 1, bonus, finalAmount);
        }
        else
        {
            printf("Salesman %d: No bonus, Final Amount = Rs. %d\n",
                   i + 1, totalSales[i]);
        }
    }

    return 0;
}
