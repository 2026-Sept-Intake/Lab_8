#include <stdio.h>
void findHotCold(int temp[], int n) {
    int i;
    int hot = temp[0], cold = temp[0];
    int hotDay = 1, coldDay = 1;

    for (i = 1; i < n; i++) {
        if (temp[i] > hot) {
            hot = temp[i];
            hotDay = i + 1;
        }
        if (temp[i] < cold) {
            cold = temp[i];
            coldDay = i + 1;
        }
    }

    printf("Hottest day: Day %d with %d degrees.\n", hotDay, hot);
    printf("Coldest day: Day %d with %d degrees.\n", coldDay, cold);
}

int main(void)
{
    int temp[7];
    int i;

    printf("Enter 7 temperatures: ");
    for (i = 0; i < 7; i++) {
        scanf("%d", &temp[i]);
    }

    findHotCold(temp, 7);

    return 0;
}
