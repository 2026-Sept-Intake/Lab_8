
#include <stdio.h>

int main()
{
    char products[10][20];
    float prices[10];

    int maxIndex = 0;
    int minIndex = 0;

    // Input product names and prices
    for (int i = 0; i < 10; i++)
    {
        printf("Enter product %d name: ", i + 1);
        scanf("%19s", products[i]);

        printf("Enter product price: ");
        scanf("%f", &prices[i]);
    }

    // Find most expensive and least expensive products
    for (int i = 1; i < 10; i++)
    {
        if (prices[i] > prices[maxIndex])
        {
            maxIndex = i;
        }

        if (prices[i] < prices[minIndex])
        {
            minIndex = i;
        }
    }

    // Display results
    printf("\nMost expensive product: %s ($%.2f)\n",
           products[maxIndex], prices[maxIndex]);

    printf("Least expensive product: %s ($%.2f)\n",
           products[minIndex], prices[minIndex]);

    return 0;
}

