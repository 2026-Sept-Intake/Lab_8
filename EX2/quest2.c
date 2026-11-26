#include<stdio.h>
int main(void)
{
	int scores[11],max,i,p;
	printf("enter the scores of the players:\n");
	for(i=0;i<11;i++)
	{
		printf("player %d: ",i+1);
		scanf("%d",&scores[i]);
	}
	max = scores[0];
	p = 0;
	for (i=1;i<11;i++)
	{
		if(scores[i] > max)
		{
			max = scores[i];
			p = i;
		}
	}
        printf("\n");
	printf("Highest score:%d by player %d\n",max,p+1);
	return 0;
}


