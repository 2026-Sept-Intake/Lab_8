#include <stdio.h>

int main () {
	char names[10][20];
	float prices[10];
	int i;
	int maxIndex = 0, minIndex = 0;

	printf("Enter 10 products (name and price):\n");
	for (i = 0; i < 10; i++) {
		printf("product %d name: ", i + 1);
		scanf("%s", names[i]);
		printf("product %d price: ", i + 1);
		scanf("%f", &prices[i]);
	}

	for (i = 1; i < 10; i++) {
		if (prices[i] > prices[maxIndex]) {
			maxIndex = i;
		}
		
		if (prices[i] < prices[maxIndex]) {
			minIndex = i;
		}
	}
	 printf("most expensive product : %s($ %.2f)\n", names[maxIndex], prices[maxIndex]);
	 printf("least expensive product : %s ($ %.2f))", names[minIndex],prices[minIndex]);
	 return 0;
}

