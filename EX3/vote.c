#include <stdio.h>

int main(void)
{
	int votes[5], maxp;
	int max = 0;

	for(int i=0; i<5; i++)
	{
		printf("Enter vote count for candidate %d: ", i+1);
		scanf("%d", &votes[i]);

		if(max < votes[i])
		{
			max = votes[i];
			maxp = i+1;
		}
	}

	printf("Candidate %d wins with %d votes.\n", maxp, max);
	return 0;
}
