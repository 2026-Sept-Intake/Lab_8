#include <stdio.h>

int main (void)
{
	int i,pos,hscore,count;
	i = 0;

	int scores[11];
	hscore = scores[0];

	for (i = 0; i<11; i++)
	{
		printf("Input player %d score:",i+1);
		scanf("%d",&scores[i]);

		if (hscore<scores[i])
		{
			hscore = scores[i];
			pos = i+1;
		}
	
	}
	printf("Highest score:%d by player %d\n",hscore,pos);

	return 0;
}
