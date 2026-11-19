#include<stdio.h>
int main()
{	int score[11];
	int highest_score;
        int position;

	for(int i=0;i<11;i++ )
        {
		printf("Enter the score of player: %d",i+1);
		scanf("%d",&score[i]);
	}
        
	highest_score=score[0];
	position=1;


	for(int i=1;i<11;i++)
	{  
		if(score[i]>highest_score)
		{
		   highest_score=score[i];
	   	   position=i+1;
		}
	}
	
	printf("highest score: %d by player %d\n",highest_score,position);

	return 0;

}	
	        	
	

