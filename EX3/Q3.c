#include <stdio.h>

int main() {
    int votes[5];
    int highest;
    int winner;


    for (int i = 0; i < 5; i++) 
    {
	    printf("Enter votes of 5 candidates:\n");
            scanf("%d", &votes[i]);
    }

    highest = votes[0];
    winner = 0;

    for (int i = 1; i < 5; i++)
    {
            if (votes[i] > highest)
            {
                    highest = votes[i];
                    winner = i;
        }
    }

    printf("Candidate %d wins with %d votes.\n", winner + 1, highest);

    return 0;
}
