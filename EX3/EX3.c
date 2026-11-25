#include <stdio.h>
int main()
{
	int votes[5]; // initializes the array to store votes of 5 candidates

	for(int i=0; i<5; i++){
         	printf("Enter the votes for candidate %d\n", i+1); // gets the 5 votes from the user
		scanf("%d", &votes[i]);                            // saves the votes in the array
	}
        int highest_vote=votes[0];  // setting the  1st element as the highest vote
	int highest_candidate=1     // to track the candidate with the highest vote
		;
	for(int j=1; j<5; j++){
		if(votes[j]>highest_vote){      // compares each element with the 1st element to get the highest vote
  			highest_vote=votes[j];
			highest_candidate=j+1;
	          
                }

	}

	printf("Candidate %d wins with %d votes.\n", highest_candidate, highest_vote);
		      

        return 0;
}
