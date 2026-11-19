#include<stdio.h>
int main (void)
{
        int scores[11];
	int highest_score;
	int highest_pos = 1;

        for (int i=0;i<11;i++)
        {
                printf("ENTER THE SCORES OF PLAYER %d: ",i+1);
                scanf("%d",&scores[i]);
	}

	highest_score = scores[0];
	for (int i=0;i<11;i++)
	{
		if(scores[i]>highest_score)
		{
			highest_score = scores[i];
			highest_pos = i+1;
		}
	}

	printf("HIGHEST SCORE: %d BY PLAYER %d\n",highest_score,highest_pos);

	return 0;
}




