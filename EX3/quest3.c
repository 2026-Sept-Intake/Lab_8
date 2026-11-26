#include<stdio.h>
int main(void)
{
	int votes[5],candidate,max,i,p;
	printf("enter the votes got by each candidate:\n");
	for(i=0;i<5;i++)
	{
		printf("candidate %d : ",i+1);
		scanf("%d",&votes[i]);
	}
	printf("\n");
	max = votes[0];
	p=0;
	for(i=1;i<5;i++)
	{
		if (votes[i] > max)
		{
			max = votes[i];
			p = i;
		}
	}
	printf("Candidate %d wins with %d votes.\n",p+1,max);
	return 0;
}
