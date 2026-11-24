#include <stdio.h>

int main(){
	int votes[5];
	int i, max, winner = 0;


	printf("Enter votes for 5 candidates: \n");
	for(i = 0; i < 5; i++){
		scanf("%d" , &votes[i]);
	}

	max = votes[0];
	for (i = 1; i < 5; i++){
		if(votes[i] > max){
			max = votes[i];
			winner = i;

		}
	}

	printf("Candidate %d wins with %d votes." , winner + 1, max);
	return 0;
}
