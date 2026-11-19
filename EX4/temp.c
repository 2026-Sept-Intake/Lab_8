
#include <stdio.h>

void caltemp(int *h, int *c, int t[], int *cday, int *hday);

int main(void)
{
    int hot, cold, temp[7], cday, hday;

    for (int i = 0; i < 7; i++)
    {
        printf("Enter the temp of the day %d:\n", i + 1);
        scanf("%d", &temp[i]);
    }

    caltemp(&hot, &cold, temp, &cday, &hday);

    printf("Hottest day: Day %d with %d degrees\n", hday, hot);
    printf("Coldest day: Day %d with %d degrees\n", cday, cold);

    return 0;
}

void caltemp(int *h, int *c, int t[], int *cday, int *hday)
{
    *h = t[0];
    *c = t[0];

    for (int i = 0; i < 7; i++)
    {
        if (t[i] > *h)
        {
            *h = t[i];
            *hday = i + 1;
        }

        if (t[i] < *c)
        {
            *c = t[i];
            *cday = i + 1;
        }
    }
}

