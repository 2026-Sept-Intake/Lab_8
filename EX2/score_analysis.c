
#include <stdio.h>

int main(void) 
{
	int scores[11];
	int highest, player = 1;

	printf("Enter scores of 11 players:\n");

	for (int i = 0; i < 11; i++){
        	printf("Player %d: ", i + 1);
        	scanf("%d", &scores[i]);
    	}		

    	highest = scores[0];

    	for (int i = 1; i < 11; i++){
        	if (scores[i] > highest){
            	highest = scores[i];
            	player = i + 1;
        	}	
    	}
	
	printf("\n");
    	printf("Highest score: %d by player %d\n", highest, player);

	return 0;
}

