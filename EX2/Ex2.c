#include <stdio.h>
int main(void)
{
	int i;
	int score[11];
	printf("Enter the score values:\n");
	for(i=0;i<11;++i)
	{
		scanf("%d",&score[i]);
	}
	int highest = score[0];
	int player = 1;
	for(i = 1; i < 11; ++i)
	{
		if(score[i] > highest)
		{
			highest = score[i];
			player = i + 1;
		}	
	}	
	printf("Highest score: %d by player %d\n",highest,player);
        return 0;                



}

