#include <stdio.h>
#define SIZE 5  // Number of Candidates

int main(void) {
    int votes[SIZE];  // Array to Store Candidate Votes

    // Read Votes for Each Candidate from the User
    for (int i = 0; i < SIZE; i++) {
        printf("Enter the Votes for Candidate %d: ", i + 1);
        scanf("%d", &votes[i]);
    }

    int highest_votes = votes[0];  // Initialize Highest Votes with the First Candidate
    int candidate_number = 1;  // Track Winning Candidate Number
    
    // Find the Candidate with the Highest Votes
    for (int i = 1; i < SIZE; i++) {
        if (votes[i] > highest_votes) {
            highest_votes = votes[i];  // Update Highest Votes
            candidate_number = i + 1;  // Update Winning Candidate by Number
        }
    }

    // Display Winning Candidate and Vote Count
    printf("Candidate %d Wins with %d Votes.\n", candidate_number, highest_votes);

    return 0;
}
