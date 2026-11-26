#include<stdio.h>
int main(void)
{	
	int votes[5];
	int h_vote;
	int h_pos;

	for(int i=0;i<5;i++)
	{	
		printf("Enter the vote of candidate %d: ",i+1);
		scanf("%d",&votes[i]);
	}

	h_vote=votes[0];
	for(int i=0;i<5;i++)
	{
	 	if(votes[i]>h_vote)
		{ 	 
			h_vote=votes[i];
			h_pos=i+1;
		}
	}
	
	printf("Candidate %d win with %d votes\n",h_pos,h_vote);

	return 0;
}	
