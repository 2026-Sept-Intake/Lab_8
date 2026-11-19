#include <stdio.h>

int main()
{
    int scores[11];
    int highest, position;

    printf("Enter the scores of 11 players:\n");

    for (int i = 0; i < 11; i++)
    {
        printf("Player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    highest = scores[0];
    position = 1;

    for (int i = 1; i < 11; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
            position = i + 1;
        }
    }

    printf("\nHighest Score: %d\n", highest);
    printf("Player's Position in Batting Order: %d\n", position);

    return 0;
}

