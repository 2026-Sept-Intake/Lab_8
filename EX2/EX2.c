#include<stdio.h>
int main ()
{

	int scores[11] = {23, 67, 45, 89, 0, 12, 78, 50, 37, 55, 22};
	int i;
	int highest = scores[0];
	int position = 1;
	int sum = 0;

	for(i = 0; i < 11; i++)
	{
		sum = sum + scores[i];
		if (scores[i] > highest)
		{
			highest = scores[i];
			position = i + 1;
		
		}	
	
	}

	
	printf("highest score: %d by player %d\n", highest, position);

	return 0;


}
