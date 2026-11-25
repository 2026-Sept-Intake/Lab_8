#include <stdio.h>

int main() {
    int votes[5] = {1200, 1800, 2300, 900, 1500};
    int winner = 0;

    for (int i = 1; i < 5; i++) {
        if (votes[i] > votes[winner]) {
            winner = i;
        }
    }

    printf("Candidate %d wins with %d votes.\n", winner + 1, votes[winner]);

    return 0;
}
