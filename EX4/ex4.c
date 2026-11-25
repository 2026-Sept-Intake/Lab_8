#include <stdio.h>

void analyzeTemperatures(int temps[], int size) {
    int maxTemp = temps[0], minTemp = temps[0];
    int hottestDay = 1, coldestDay = 1;

    for (int i = 1; i < size; i++) {
        if (temps[i] > maxTemp) {
            maxTemp = temps[i];
            hottestDay = i + 1;
        }
        if (temps[i] < minTemp) {
            minTemp = temps[i];
            coldestDay = i + 1;
        }
    }

    printf("Hottest day: Day %d with %d degrees.\n", hottestDay, maxTemp);
    printf("Coldest day: Day %d with %d degrees.\n", coldestDay, minTemp);
}

int main() {
    int temperatures[7] = {22, 25, 20, 30, 28, 24, 26};
    analyzeTemperatures(temperatures, 7);

    return 0;
}

