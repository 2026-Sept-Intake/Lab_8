#include <stdio.h>

int main()
{
    int scores[10] = {23, 67, 45, 89, 0, 12, 78, 50, 37, 55};

    int highest = scores[0];
    int player = 1;

    for (int i = 1; i < 10; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
            player = i + 1;
        }
    }

    printf("Highest score: %d by player %d\n", highest, player);

    return 0;
}
