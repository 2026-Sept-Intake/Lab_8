#include <stdio.h>

int main() {
    int votes[5] = {1200, 1800, 2300, 900, 1500};
    int highest = votes[0];
    int winner = 0;

    for (int i = 1; i < 5; i++) {
        if (votes[i] > highest) {
            highest = votes[i];
            winner = i;
        }
    }

    printf("Candidate %d wins with %d votes.\n", winner + 1, highest);

    return 0;
}
