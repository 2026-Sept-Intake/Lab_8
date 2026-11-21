#include <stdio.h>

int main() {
    char products[10][50];
    float prices[10];

    int expensive = 0;
    int cheapest = 0;

    printf("Enter names of 10 products:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%49s", products[i]);
    }

    printf("Enter prices of 10 products:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%f", &prices[i]);
    }

    for (int i = 1; i < 10; i++) {

        if (prices[i] > prices[expensive]) {
            expensive = i;
        }

        if (prices[i] < prices[cheapest]) {
            cheapest = i;
        }
    }

    printf("Most expensive product: %s ($%.2f)\n",
           products[expensive], prices[expensive]);

    printf("Least expensive product: %s ($%.2f)\n",
           products[cheapest], prices[cheapest]);

    return 0;
}
