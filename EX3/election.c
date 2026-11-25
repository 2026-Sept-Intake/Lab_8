#include <stdio.h>
int main(void) 
{
    int votes[5];
    int i, max, winner;

    for (i = 0; i < 5; i++) {
        printf("Enter votes for candidate %d: ", i + 1);
        scanf("%d", &votes[i]);
    }

    max = votes[0];
    winner = 1;

    for (i = 1; i < 5; i++) {
        if (votes[i] > max) {
            max = votes[i];
            winner = i + 1;
        }
    }

    printf("Candidate %d wins with %d votes.\n", winner, max);

    return 0;
}
