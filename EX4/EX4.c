#include<stdio.h>
void findTemperatureExtremes(int temps[], int size) {
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < size; i++) {
        if (temps[i] > temps[maxIndex]) {
            maxIndex = i;
        }
        if (temps[i] < temps[minIndex]) {
            minIndex = i;
        }
    }

    printf("Hottest day: Day %d with %d degrees.\n", maxIndex + 1, temps[maxIndex]);
    printf("Coldest day: Day %d with %d degrees.\n", minIndex + 1, temps[minIndex]);
}

int main() {
    int size = 7;
    int temps[7];
    printf("Enter temperatures for %d days:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &temps[i]);
    }

    findTemperatureExtremes(temps, size);

    return 0;
}

