#include <stdio.h>
#define SIZE 10  // Number of Products
#define LENGTH 50  // Maximum Length of Each Product Name

int main(void) {
    char product_name[SIZE][LENGTH];  // Parallel Array for Product Names
    float product_price[SIZE];  // Parallel Array for Product Prices

    // Read Product Names and Prices
    for (int i = 0; i < SIZE; i++) {
        printf("Enter the Name of Product %d: ", i + 1);
        scanf("%49s", product_name[i]);

        printf("Enter the Price of %s: ", product_name[i]);
        scanf("%f", &product_price[i]);
    }

    int max_product_index = 0;
    int min_product_index = 0;

    // Identify Most Expensive and Least Expensive Products
    for (int i = 1; i < SIZE; i++) {
        if (product_price[i] > product_price[max_product_index]) {
            max_product_index = i;
        }
        if (product_price[i] < product_price[min_product_index]) {
            min_product_index = i;
        }
    }

    // Display Results
    printf("Most Expensive Product: %s ($%.2f)\n", product_name[max_product_index], product_price[max_product_index]);
    printf("Least Expensive Product: %s ($%.2f)\n", product_name[min_product_index], product_price[min_product_index]);

    return 0;
}
