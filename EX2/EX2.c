#include <stdio.h>

int main() {
    int scores[11];
    int highest, position;

    for (int i = 0; i < 11; i++) 
    {
	    printf("Enter scores of 11 players:\n");
            scanf("%d", &scores[i]);
    }

    highest = scores[0];
    position = 1;

    for (int i = 1; i < 11; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            position = i + 1;
        }
    }

    printf("Highest score: %d by player %d\n",
           highest, position);

    return 0;
} 


