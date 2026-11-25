#include <stdio.h>

int main() {
    int rain[4][7] = {
        {3, 0, 5, 2, 0, 1, 6},
        {7, 0, 3, 4, 2, 8, 5},
        {2, 1, 5, 3, 0, 2, 7},
        {6, 0, 8, 2, 4, 3, 3}
    };

    int total = 0;

    for (int week = 0; week < 4; week++) {
        int weekTotal = 0;
        for (int day = 0; day < 7; day++) {
            weekTotal += rain[week][day];
        }
        printf("Week %d total: %d mm\n", week + 1, weekTotal);
        total += weekTotal;
    }

    printf("Overall average: %d mm\n", total / 4);

    return 0;
}
