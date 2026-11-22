#include <stdio.h>

int main(void)
{
    char names[10][50];//declaring array for product names
    double prices[10];//declaring array for product prices
    int i;

    printf("Enter the names of 10 products:\n");
    for (i = 0; i < 10; ++i)
    {
        scanf("%49s", names[i]);
    }

    printf("Enter the prices of the 10 products:\n");
    for (i = 0; i < 10; ++i)
    {
        scanf("%lf", &prices[i]);
    }

    int max_idx = 0;
    int min_idx = 0;

    for (i = 1; i < 10; ++i)
    {
        if (prices[i] > prices[max_idx])
        {
            max_idx = i;
        }
        if (prices[i] < prices[min_idx])
        {
            min_idx = i;
        }
    }

    printf("Most expensive product: %s ($%.2f)\n", names[max_idx], prices[max_idx]);
    printf("Least expensive product: %s ($%.2f)\n", names[min_idx], prices[min_idx]);

    return 0;
}
