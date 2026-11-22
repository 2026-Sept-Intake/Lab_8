#include <stdio.h>
#define WEEKS 4  // Number of Weeks
#define DAYS 7  // Number of Days per Week

int main(void) {
    float rainfall[WEEKS][DAYS];  // 2D Array to Store Rainfall Data
    float weekly_totals[WEEKS];  // Array to Store Each Week's Total
    float overall_total = 0.0f;  // Total Rainfall Across All Weeks

    // Read Rainfall Data for Each Week and Day
    for (int i = 0; i < WEEKS; i++) {
        for (int j = 0; j < DAYS; j++) {
            printf("Enter Rainfall for Week %d, Day %d (in mm): ", i + 1, j + 1);
            scanf("%f", &rainfall[i][j]);
        }
    }
 
    // Calculate Weekly Totals and Overall Monthly Total
    for (int i = 0; i < WEEKS; i++) {
        weekly_totals[i] = 0.0f;
        for (int j = 0; j < DAYS; j++) {
            weekly_totals[i] += rainfall[i][j];
        }
        overall_total += weekly_totals[i];
    }

    float overall_average = overall_total / WEEKS;

    // Display Weekly Totals and Overall Average
    for (int i = 0; i < WEEKS; i++) {
        printf("Week %d Total: %.2f mm\n", i + 1, weekly_totals[i]);
    }
    printf("Overall Average: %.2f mm\n", overall_average);

    return 0;
}

