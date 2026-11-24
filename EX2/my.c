#include <stdio.h>

int main () {
	int scores[11];
	int i, max, pos = 0;

	printf("Enter scores of 11 players:\n");
	for (i = 0; i < 11; i++) {
		scanf("%d", &scores[i]);
	}

	max =  scores[0];

	for (i + 1; i < 11; i++) {
		if (scores[i] > max) {
			max = scores[i];
			pos = i;
		}
	}

	printf("Highest score: %d by player %d",max, pos + 1);
	return 0;
}
				
