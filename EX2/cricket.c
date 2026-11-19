#include <stdio.h>

int main()
{
    int scores[11], i, max, position;

    printf("Enter the scores of 11 players:\n");

    for(i = 0; i < 11; i++)
    {
        printf("Player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    position = 1;

    for(i = 1; i < 11; i++)
    {
        if(scores[i] > max)
        {
            max = scores[i];
            position = i + 1;
        }
    }

    printf("\nHighest score: %d by player %d\n", max, position);

    return 0;
}

