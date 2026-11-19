#include <stdio.h>
#define WEEKS 4
#define DAYS 7

int weekTotal(int rain[][DAYS], int week)
{
    int total = 0;
    for (int d = 0; d < DAYS; d++) {
        total += rain[week][d];
    }
    return total;
}

int main(void)
{

    int rain[WEEKS][DAYS] = {
        {3, 0, 5, 2, 0, 1, 6},
        {7, 0, 3, 4, 2, 8, 5},
        {2, 1, 5, 3, 0, 2, 7},
        {6, 0, 8, 2, 4, 3, 3}
    };

    int grandTotal = 0;

    for (int w = 0; w < WEEKS; w++) {
        int total = weekTotal(rain, w);
        printf("Week %d total: %d mm\n", w + 1, total);
        grandTotal += total;
    }

    printf("Overall average: %d mm\n", grandTotal / WEEKS);

    return 0;
}