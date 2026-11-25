#include <stdio.h>

int main(void)
{

	char names[10][20];
    	float prices[10];

    	int expensive = 0;
    	int cheapest = 0;

    	printf("Enter details of 10 products:\n");

    	for (int i = 0; i < 10; i++) {

        	printf("\nProduct %d name: ", i + 1);
        	scanf("%19s", names[i]);

        	printf("Product %d price: ", i + 1);
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

    	printf("\nMost expensive product: %s ($%.2f)\n",
           	names[expensive], prices[expensive]);

    	printf("Least expensive product: %s ($%.2f)\n",
           	names[cheapest], prices[cheapest]);

    	return 0;
}

