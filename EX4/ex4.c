#include <stdio.h>
#define DAYS 7  // Number of Days in a Week

// Find the Hottest Day and Highest Temperature
void find_hottest_day(const float temperature[], int size, int *hottest_day, float *highest_temp) {
    *highest_temp = temperature[0];
    *hottest_day = 1;

    for (int i = 1; i < size; i++) {
        if (temperature[i] > *highest_temp) {
            *highest_temp = temperature[i];
            *hottest_day = i + 1;
        }
    }
}

// Find the Coldest Day and Lowest Temperature
void find_coldest_day(const float temperature[], int size, int *coldest_day, float *lowest_temp) {
    *lowest_temp = temperature[0];
    *coldest_day = 1;

    for (int i = 1; i < size; i++) {
        if (temperature[i] < *lowest_temp) {
            *lowest_temp = temperature[i];
            *coldest_day = i + 1;
        }
    }
}

int main(void) {
    float temperature[DAYS];  // Array to Store Daily Temperatures

    // Read Temperatures for Each Day from the User
    for (int i = 0; i < DAYS; i++) {
        printf("Enter the Temperature for Day %d (in degrees Celsius): ", i + 1);
        scanf("%f", &temperature[i]);
    }

    int hottest_day = 1;
    float highest_temp = temperature[0];
    int coldest_day = 1;
    float lowest_temp = temperature[0];

    // Pass the Array to Functions to Find Hottest and Coldest Days
    find_hottest_day(temperature, DAYS, &hottest_day, &highest_temp);
    find_coldest_day(temperature, DAYS, &coldest_day, &lowest_temp);

    // Display Hottest Day and Coldest Day
    printf("Hottest day: Day %d with %.2f degrees Celsius.\n", hottest_day, highest_temp);
    printf("Coldest day: Day %d with %.2f degrees Celsius.\n", coldest_day, lowest_temp);

    return 0;
}
