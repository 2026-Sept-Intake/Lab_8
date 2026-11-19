#include <stdio.h>

int main() {
    char names[10][50];
    double prices[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter name of product %d: ", i + 1);
        scanf(" %49[^\n]", names[i]);
        printf("Enter price of product %d: ", i + 1);
        scanf("%lf", &prices[i]);
    }

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < 10; i++) {
        if (prices[i] > prices[maxIndex]) {
            maxIndex = i;
        }
        if (prices[i] < prices[minIndex]) {
            minIndex = i;
        }
    }

    printf("Most expensive product: %s ($%.2f)\n", names[maxIndex], prices[maxIndex]);
    printf("Least expensive product: %s ($%.2f)\n", names[minIndex], prices[minIndex]);

    return 0;
}

