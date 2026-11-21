#include <stdio.h>

int main()
{
    int rainfall[4][7] = {
        {3, 0, 5, 2, 0, 1, 6},
        {7, 0, 3, 4, 2, 8, 5},
        {2, 1, 5, 3, 0, 2, 7},
        {6, 0, 8, 2, 0, 5, 5}
    };

    int week, day;
    int total;
    int overall = 0;

    
    for (week = 0; week < 4; week++)
    {
        total = 0;

        for (day = 0; day < 7; day++)
        {
            total = total + rainfall[week][day];
        }

        printf("Week %d total: %d mm\n", week + 1, total);

        overall = overall + total;
    }

    printf("Overall average: %.2f mm\n", overall / 30.0);

    return 0;
}
