#include<stdio.h>
#define SIZE 11 //size 11 since 11 players
int main (void)
{
	int score[SIZE],high=0,pos; //int array for scores, high is high score ,pos to keep track of position in batting order
	for(int i=0;i<SIZE;i++)
	{
		printf("enter the score\n");
		scanf("%d",&score[i]);
		if(score[i]>high)
		{
			high=score[i]; //highest score gets saved in high cell
			pos=i+1; //i+1 since the array starts from 0
		}
	}
	printf("Highest score: %d by player %d\n",high,pos);
	return 0;
}
