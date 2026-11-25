#include <stdio.h>

int main() {
    int scores[11] = {23, 67, 45, 89, 0, 12, 78, 50, 37, 55, 22};
    int maxScore = scores[0];
    int playerPosition = 1;

    for (int i = 1; i < 11; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            playerPosition = i + 1; // +1 because batting order starts at 1
        }
    }

    printf("Highest score: %d by player %d\n", maxScore, playerPosition);

    return 0;
}

