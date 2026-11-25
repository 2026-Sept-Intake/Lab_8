#include <stdio.h>
int main(void)
{
    int rain[4][7];
    int weekTotal[4];
    int i, j;
    int total = 0;
    float avg;

    for (i = 0; i < 4; i++) {
        weekTotal[i] = 0;
        printf("Enter rainfall for week %d (7 days): ", i + 1);
        for (j = 0; j < 7; j++) {
            scanf("%d", &rain[i][j]);
            weekTotal[i] = weekTotal[i] + rain[i][j];
        }
        total = total + weekTotal[i];
    }

    for (i = 0; i < 4; i++) {
        printf("Week %d total: %d mm\n", i + 1, weekTotal[i]);
    }

    avg = total / 4.0;
    printf("Overall average: %.0f mm\n", avg);

    return 0;
}

