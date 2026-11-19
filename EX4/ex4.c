#include <stdio.h>

int findHottest(int temp[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (temp[i] > temp[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int findColdest(int temp[], int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (temp[i] < temp[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

int main(void) {
    int temp[7];
    for (int i = 0; i < 7; i++) {
        printf("Enter the temperature of the day %d: ", i + 1);
        scanf("%d", &temp[i]);
    }

    int maxIndex = findHottest(temp, 7);
    int minIndex = findColdest(temp, 7);

    printf("Hottest day: Day %d with %d degrees.\n", maxIndex + 1, temp[maxIndex]);
    printf("Coldest day: Day %d with %d degrees.\n", minIndex + 1, temp[minIndex]);

    return 0;
}

