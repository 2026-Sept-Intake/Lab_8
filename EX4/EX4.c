#include <stdio.h>

void findHottest(int temp[], int size)
{
    int max = temp[0];
    int day = 0;

    for (int i = 1; i < size; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
            day = i;
        }
    }

    printf("Hottest day: Day %d with %d degrees.\n", day + 1, max);
}

void findColdest(int temp[], int size)
{
    int min = temp[0];
    int day = 0;

    for (int i = 1; i < size; i++)
    {
        if (temp[i] < min)
        {
            min = temp[i];
            day = i;
        }
    }

    printf("Coldest day: Day %d with %d degrees.\n", day + 1, min);
}

int main()
{
    int temp[7];

    printf("Enter temperatures for 7 days:\n");

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &temp[i]);
    }

    findHottest(temp, 7);
    findColdest(temp, 7);

    return 0;
}

