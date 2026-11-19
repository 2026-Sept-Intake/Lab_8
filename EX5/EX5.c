#include <stdio.h>

int main() {
    int rainfall[4][7] = {
        {3, 0, 5, 2, 0, 1, 6},
        {7, 0, 3, 4, 2, 8, 5},
        {2, 1, 5, 3, 0, 2, 7},
        {6, 0, 8, 2, 0, 4, 6}
    };

    int total = 0;
    int weekTotal;

    for (int i = 0; i < 4; i++) {
        weekTotal = 0;

        for (int j = 0; j < 7; j++) {
            weekTotal += rainfall[i][j];
        }

        printf("Week %d total: %d mm\n", i + 1, weekTotal);

        total += weekTotal;
    }

    printf("Overall average: %.0f mm\n", (float)total / 28);

    return 0;
}
