#include <stdio.h>
int main (void)
{
	int hvotes,votes,i,pos;

	int vote[5];
	hvotes = 0;

	for(i = 0; i<5;i++)
	{
		printf("Enter the vote count of candidate %d: ",i+1);
		scanf("%d",&vote[i]);

		if(hvotes<vote[i])
		{
			hvotes = vote[i];
			pos = i+1;
		}
	}
	printf("Candidate %d wins with %d votes.\n",pos,hvotes);
	return 0;

}

