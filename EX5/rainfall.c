#include <stdio.h>

void calculateWeeklyRainfall(int rainfall[4][7])
{
    int total;

    for (int i = 0; i < 4; i++)
    {
        total = 0;

        for (int j = 0; j < 7; j++)
        {
            if (i == 3 && j >= 2)
                break;

            total += rainfall[i][j];
        }

        printf("Week %d total: %d mm\n", i + 1, total);
    }
}

void calculateAverage(int rainfall[4][7])
{
    int total = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 3 && j >= 2)
                break;

            total += rainfall[i][j];
        }
    }

    printf("Overall average: %.2f mm\n", total / 30.0);
}

int main()
{
    int rainfall[4][7] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 3 && j >= 2)
                break;

            printf("Enter rainfall for week %d, day %d: ", i + 1, j + 1);
            scanf("%d", &rainfall[i][j]);
        }
    }

    calculateWeeklyRainfall(rainfall);

    calculateAverage(rainfall);

    return 0;
}
