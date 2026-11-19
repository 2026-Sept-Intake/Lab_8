#include <stdio.h>

int main(void) {
    char *names[10] = {"Apple", "Banana", "Orange", "Mango", "Grapes",
                       "Peach", "Plum", "Pear", "Lemon", "Kiwi"};
    double prices[10] = {5.99, 12.50, 7.25, 10.00, 15.75,
                         9.99, 8.30, 6.50, 11.40, 4.99};

    int maxIdx = 0, minIdx = 0;

    for (int i = 1; i < 10; i++) {
        if (prices[i] > prices[maxIdx]) maxIdx = i;
        if (prices[i] < prices[minIdx]) minIdx = i;
    }

    printf("Most expensive product: %s ($%.2f)\n", names[maxIdx], prices[maxIdx]);
    printf("Least expensive product: %s ($%.2f)\n", names[minIdx], prices[minIdx]);

    return 0;
}
