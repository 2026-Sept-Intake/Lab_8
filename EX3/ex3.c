#include <stdio.h>

int main() {
    int votes[5] = {1200, 1800, 2300, 900, 1500};
    int maxVotes = votes[0];
    int winner = 1;

    for (int i = 1; i < 5; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = i + 1; 
        }
    }

    printf("Candidate %d wins with %d votes.\n", winner, maxVotes);

    return 0;
}

