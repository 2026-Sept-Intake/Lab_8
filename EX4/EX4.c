#include <stdio.h>

void findTemperature(int temp[], int size) {
    int hottest = temp[0];
    int coldest = temp[0];
    int hotDay = 1;
    int coldDay = 1;

    for (int i = 1; i < size; i++) {
        if (temp[i] > hottest) {
            hottest = temp[i];
            hotDay = i + 1;
        }

        if (temp[i] < coldest) {
            coldest = temp[i];
            coldDay = i + 1;
        }
    }

    printf("Hottest day: Day %d with %d degrees.\n", hotDay, hottest);
    printf("Coldest day: Day %d with %d degrees.\n", coldDay, coldest);
}

int main() {
    int temperature[7] = {22, 25, 20, 30, 28, 24, 26};

    findTemperature(temperature, 7);

    return 0;
}
