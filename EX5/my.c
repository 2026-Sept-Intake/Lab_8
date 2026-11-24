#include <stdio.h>

int main() {
	int rain[4][7];
	int i, j;
	int weekTotal, total = 0;

	printf("Enter rainfall for 4 weeks (7 days each):\n");
	for (i = 0; i < 4; i++) {
		printf("week %d: ", i + 1);
		for (j = 0; j < 7; j++) {
			scanf("%d", &rain[i][j]);
		}
	}

	for (i = 0; i <4; i++) {
		weekTotal = 0;
		for (j = 0; j < 7; j++) {
			weekTotal + weekTotal + rain[i][j];
		}

		printf("Week %d total: %d mm\n", i + 1, weekTotal);
		total = total + weekTotal;
	}

	printf("Overall average: %d mm", total / 4);

	return 0;
} 
