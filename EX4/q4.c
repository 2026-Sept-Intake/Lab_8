#include <stdio.h>

int findHottest(int temps[], int size) {
    int hottest = 0;
    for (int i = 1; i < size; i++) {
        if (temps[i] > temps[hottest]) {
            hottest = i;
        }
    }
    return hottest;
}

int findColdest(int temps[], int size) {
    int coldest = 0;
    for (int i = 1; i < size; i++) {
        if (temps[i] < temps[coldest]) {
            coldest = i;
        }
    }
    return coldest;
}

int main() {
    int temps[7] = {22, 25, 20, 30, 28, 24, 26};

    int hot = findHottest(temps, 7);
    int cold = findColdest(temps, 7);

    printf("Hottest day: Day %d with %d degrees.\n", hot + 1, temps[hot]);
    printf("Coldest day: Day %d with %d degrees.\n", cold + 1, temps[cold]);

    return 0;
}
