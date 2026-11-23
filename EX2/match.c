#include <stdio.h>

int main(void)
{
	int scores[11], hposition;
	int hscore = 0;
	
	for(int i=0; i<11; i++)
	{
		printf("Enter score for player %d: ", i+1);
		scanf("%d", &scores[i]);
		if(hscore < scores[i])
		{
			hscore = scores[i];
			hposition = i+1;
		}
	}

	printf("Highest score: %d by player %d\n", hscore, hposition);
	return 0;
}
