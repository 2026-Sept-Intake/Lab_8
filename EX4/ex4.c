
#include <stdio.h>

void findTemperature(int temp[]);

int main(void) 
{
	int temp[7];

    	printf("Enter temperatures for 7 days:\n");

    	for (int i = 0; i < 7; i++) {
        	printf("Day %d: ", i + 1);
        	scanf("%d", &temp[i]);
    	}

    	findTemperature(temp);

    	return 0;
}

void findTemperature(int temp[]) {

    	int hottest = temp[0];
    	int coldest = temp[0];

    	int hotDay = 1;
    	int coldDay = 1;

    	for (int i = 1; i < 7; i++) {
		if (temp[i] > hottest) {
            	hottest = temp[i];
            	hotDay = i + 1;
        	}

        	if (temp[i] < coldest) {
            	coldest = temp[i];
            	coldDay = i + 1;
        	}
    	}

	printf("\n");
	printf("Hottest day: Day %d with %d degrees.\n", hotDay, hottest);
	printf("Coldest day: Day %d with %d degrees.\n", coldDay, coldest);
}

