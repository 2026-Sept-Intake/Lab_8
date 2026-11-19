#include <stdio.h>

int main(void){
	int scores[11];
	for(int	i = 0; i < 11; i++){
		printf("Enter the score of player %d: ",i+1);
		scanf("%d",&scores[i]);
		
	}
	
	int max = scores[0];
	int position = 0;
	for(int j = 0; j <11 ; j++){
		if(max < scores[j]){
			max = scores[j];
			position = j+1;
		}

	}
	printf("Highest score: %d by player %d\n",max,position);
	

	return 0;
}


