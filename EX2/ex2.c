#include <stdio.h>
#define SIZE 11  // Number of Players

int main(void) {
    int scores[SIZE];  // Array to store Player Scores
    int player_position = 1;

    // Read Scores from the User into the Array
    for (int i = 0; i < SIZE; i++) {
        printf("Enter the Score of the Player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int highest_score = scores[0]; // Initialize Highest Score with the First Element

    // Find the Highest Score and Corresponding Player Position
    for (int i = 0; i < SIZE; i++) {
        if (scores[i] > highest_score) {
            highest_score = scores[i];  // Update Highest Score
	    player_position = i + 1;  // Corresponding Player Position
        }
    }

    // Display Highest Score in Batting Order
    printf("Highest Score: %d by player %d\n", highest_score, player_position);
    
    return 0;
}

