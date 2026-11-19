
#include <stdio.h>

#define PRODUCTS 10

int findMostExpensive(float prices[], int size)
{
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (prices[i] > prices[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findLeastExpensive(float prices[], int size)
{
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (prices[i] < prices[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main(void)
{
    char names[PRODUCTS][20] = {
        "Apple", "Banana", "Orange", "Mango", "Grapes",
        "Peach", "Plum", "Pear", "Lemon", "Kiwi"
    };

    float prices[PRODUCTS] = {
        5.99, 12.50, 7.25, 10.00, 15.75,
        9.99, 8.30, 6.50, 11.40, 4.99
    };

    int maxI = findMostExpensive(prices, PRODUCTS);
    int minI = findLeastExpensive(prices, PRODUCTS);

    printf("Most expensive product: %s ($%.2f)\n", names[maxI], prices[maxI]);
    printf("Least expensive product: %s ($%.2f)\n", names[minI], prices[minI]);

    return 0;
}