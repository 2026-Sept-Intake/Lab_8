#include <stdio.h>

int main (void){

	int score[11];
	int Highest, Player;

	for(int i = 0; i<11; i++){

		 printf("Enter the score:");
		 scanf("%d", &score[i]);
	}


	Highest = score[0];
	Player = 1;

	for(int i = 1; i<11; i++){

		if(Highest < score[i]){

		Highest = score[i];
		Player = i+1;
		}

	
		
	}
	printf("Highest score: %d by player %d", Highest,Player);
	

	return 0;
}
