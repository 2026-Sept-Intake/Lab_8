#include <stdio.h>

int main (void)
{
	int rain[4][7];

	for (int row = 0;row < 4; row++)
	{
		for(int col = 0; col < 7; col++)
		{
			printf("Enter the rainfall of week %d day %d: ",row+1,col+1);
			scanf("%d",&rain[row][col]);
		}
	}

	int week1sum = 0;
	int week2sum = 0;
	int week3sum = 0;
	int week4sum = 0;

	for (int col = 0; col < 7; col++)
	{
		week1sum = week1sum + rain[0][col];
		week2sum = week2sum + rain[1][col];
		week3sum = week3sum + rain[2][col];
		week4sum = week4sum + rain[3][col];
	}

	float avg = (week1sum+week2sum+week3sum+week4sum)/4.0;

	printf("Week 1 total: %d\n",week1sum);
	printf("Week 2 total: %d\n",week2sum);
	printf("Week 3 total: %d\n",week3sum);
	printf("Week 4 total: %d\n",week4sum);
	printf("Overall Avarage: %.1f\n",avg);


	return 0;
}

