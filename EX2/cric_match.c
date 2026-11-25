#include <stdio.h>
int main(void)
{
    int scores[11];
    int i, max, pos;//pos = position

    for (i = 0; i < 11; i++) {
        printf("Enter score of player %d: ", i+1);
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    pos = 1;

    for (i = 1; i < 11; i++) {
        if (scores[i] > max) {
            max = scores[i];
            pos = i + 1;
        }
    }

    printf("Highest score: %d by player %d\n", max, pos);

    return 0;
}
