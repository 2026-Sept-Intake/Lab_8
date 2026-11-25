#include <stdio.h>

int main(void)
{
	int rainfall[4][7];
	int total = 0;

	printf("Enter rainfall data for 30 days (use 0 for the remaining days):\n");

	for (int i = 0; i < 4; i++) {

        	for (int j = 0; j < 7; j++) {
			printf("Week %d, Day %d: ", i + 1, j + 1);
            		scanf("%d", &rainfall[i][j]);
        	}
    	}

    	printf("\nWeekly Rainfall Totals:\n");
	for (int i = 0; i < 4; i++) {
		int weeklyTotal = 0;
		for (int j = 0; j < 7; j++) {
			weeklyTotal = weeklyTotal + rainfall[i][j];
		}

        	printf("Week %d total: %d mm\n", i + 1, weeklyTotal);
		
		total = total + weeklyTotal;
    	}

    	printf("Overall average: %.2f mm\n", total / 4.0);

    	return 0;
}

