#include<stdio.h>
int main()
{
	int votes[5] = {1200, 1800, 2300, 900, 1500};
	int i;
	int highest = votes[0];
	int winner = 1;

	for(i = 0; i < 5; i++)
	{
		if(votes[i] > highest)
		{
		highest = votes[i];
		winner = i +1;

		}	

	}	


	printf("candidate %d wins with %d votes.\n", winner, highest);

return 0;






}	
