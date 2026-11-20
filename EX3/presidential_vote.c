#include<stdio.h>
int main(void)
{
	int pos,max=0,votes[5]; //pos to keep track of position of the winning candidate, max to store the votes of the winning candidate, votes int array contain the votes of the 5 candidates
	for(int i=0;i<5;i++)
	{
		printf("enter the no of votes\n");
		scanf("%d",&votes[i]);
		if(votes[i]>max)
		{
			max=votes[i];
			pos=i+1; //since the array index starts from 0
		}
	}
	printf("Candidate %d wins with %d votes\n",pos,max);
	return 0;
}
