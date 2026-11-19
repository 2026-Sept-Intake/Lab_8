# include <stdio.h>

int main()
{
	int scores[11];
	int highest;
	int player;

	for(int i = 0; i < 11; i++)
	{
		printf("Enter scores of 11 players:\n");
		scanf("%d", &scores[i]);
	}
	highest = scores[0];
	player = 0;

	for(int i = 1; i < 11; i++)
	{ 
	
		if(scores[i] > highest)
		{
			highest = scores[i];
			player = i;
		}
	}

	printf("Highest score: %d by player %d\n", highest, player + 1);

	return 0;
}

