#include <stdio.h>

int main(void){
	int votes[5];
	for(int	i = 0; i < 5; i++){
		printf("Enter the votes of the candidate %d:",i+1);
		scanf("%d",&votes[i]);
		
	}
	
	int max = votes[0];
	int position = 0;
	for(int j = 0; j <5 ; j++){
		if(max < votes[j]){
			max = votes[j];
			position = j+1;
		}

	}
	printf("Candidate %d  wins with %d votes.\n",position,max);

	return 0;
}
