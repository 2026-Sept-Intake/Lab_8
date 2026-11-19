#include <stdio.h>
int find_highest(int scores[],int n)
{
	int maxindex=0;
for(int i=1;i<n;i++)
{
	if (scores[i]>scores[maxindex])
	{
		maxindex=i;
	}
}
return maxindex;
}
int main()
{
	int scores[11];
	printf("enter 11 scores: ");

	for(int i=0;i<11;i++)
	{
		scanf("%d",&scores[i]);
	}

	int idx=find_highest(scores,11);
	printf("highest score: %d by player %d\n",scores[idx],idx+1);
	return 0;
}








