#include <stdio.h>

int main(){
	int scores[11];
	int max, pos;

	printf("Enter scores of 11 players: ");

	for(int i = 0; i < 10; i++){
		scanf("%d," , &scores[i]);
	}

	scanf("%d", &scores[10]);

	max = scores[0];
	pos = 0;

	for(int i = 1; i < 11; i++){
		if(scores[i] > max){
			max = scores[i];
			pos = i;
		}
	}

	printf("Highest score: %d by player %d\n", max,pos + 1);
	return 0;
}
	
