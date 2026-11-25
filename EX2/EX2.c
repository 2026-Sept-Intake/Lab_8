#include <stdio.h>
int main(void){

	int score[11];  // initializes an array to store the 11 scores

	for(int i=0; i<11; i++){
		printf("Enter the score of player number %d\n", i+1);  // gets the 11 scores from the user
		scanf("%d", &score[i]);                                // saves the scores in the array
	}

	int highest_score=score[0];  // setting the 1st element as the hghest score
	int highest_player=1;        // to track the player who scored the most

	for(int j=1; j<11; j++){
		if(score[j]>highest_score){       // searching for the highest score by comparing it to the 1st score
			highest_score=score[j];
		        highest_player=j+1;
		}
	}
	printf("Highest score: %d by player %d\n", highest_score, highest_player);
	return 0;
}
