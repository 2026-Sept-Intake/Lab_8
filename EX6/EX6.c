#include <stdio.h>

int main() {
    char products[10][30];
    float prices[10];

    float highest, lowest;
    int expensiveIndex = 0;
    int cheapIndex = 0;

    printf("Enter names and prices of 10 products:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%29s", products[i]);
        scanf("%f", &prices[i]);
    }

    highest = prices[0];
    lowest = prices[0];

    for (int i = 1; i < 10; i++) {

        if (prices[i] > highest) {
            highest = prices[i];
            expensiveIndex = i;
        }

        if (prices[i] < lowest) {
            lowest = prices[i];
            cheapIndex = i;
        }
    }

    printf("Most expensive product: %s ($%.2f)\n",
           products[expensiveIndex], highest);

    printf("Least expensive product: %s ($%.2f)\n",
           products[cheapIndex], lowest);

    return 0;
}

