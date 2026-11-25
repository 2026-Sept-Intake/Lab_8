#include <stdio.h>

int main() {
    char *names[10] = {"Apple", "Banana", "Orange", "Mango", "Grapes",
                       "Peach", "Plum", "Pear", "Lemon", "Kiwi"};
    float prices[10] = {5.99, 12.50, 7.25, 10.00, 15.75,
                        9.99, 8.30, 6.50, 11.40, 4.99};

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
