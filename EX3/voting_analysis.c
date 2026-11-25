#include <stdio.h>

int main(void)
{

	int votes[5];
    	int winner = 1;

    	printf("Enter votes for 5 candidates:\n");

    	for (int i = 0; i < 5; i++) {
        	printf("Candidate %d: ", i + 1);
        	scanf("%d", &votes[i]);
    	}	

    	int highest = votes[0];

    	for (int i = 1; i < 5; i++) {
		if (votes[i] > highest) {
            	highest = votes[i];
            	winner = i + 1;
        	}	
    	}
	
	printf("\n");
    	printf("Candidate %d wins with %d votes.\n", winner, highest);

    	return 0;
}

