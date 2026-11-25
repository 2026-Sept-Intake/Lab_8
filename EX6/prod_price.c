#include <stdio.h>
int main(void)
{
    char names[10][20];
    float prices[10];
    int i, maxIndex = 0, minIndex = 0;

    printf("Enter 10 product names:\n");
    for (i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter 10 prices:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &prices[i]);
    }

    for (i = 1; i < 10; i++) {
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
