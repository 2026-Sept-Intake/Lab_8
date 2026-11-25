#include <stdio.h>

int main() {
    int scores[11] = {23, 67, 45, 89, 0, 12, 78, 50, 37, 55, 22};
    int highest = scores[0];
    int position = 1;

    for (int i = 1; i < 11; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            position = i + 1;
        }
    }

    printf("Highest score: %d by player %d\n", highest, position);

    return 0;
}
