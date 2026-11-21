#include <stdio.h>

int main()
{
    char *products[10] = {
        "Apple", "Banana", "Orange", "Mango",
        "Grapes", "Peach", "Plum", "Pear",
        "Lemon", "Kiwi"
    };

    float prices[10] = {
        5.99, 12.50, 7.25, 10.00, 15.75,
        9.99, 8.30, 6.50, 11.40, 4.99
    };

    int i;
    int max = 0;
    int min = 0;

    for (i = 1; i < 10; i++)
    {
        if (prices[i] > prices[max])
        {
            max = i;
        }

        if (prices[i] < prices[min])
        {
            min = i;
        }
    }

    printf("Most expensive product: %s ($%.2f)\n",
           products[max], prices[max]);

    printf("Least expensive product: %s ($%.2f)\n",
           products[min], prices[min]);

    return 0;
}

