#include <stdio.h>

int main(void)
{
	int falldata[4][7];

	for(int i=0; i<4; i++)
	{
		printf("Enter rainfall data for week %d\n", i+1);
		for(int j=0; j<7; j++)
		{
			printf("Day %d: ", j+1);
			scanf("%d", &falldata[i][j]);
		}
		printf("\n");
	}
	
	int total, totalall;
	for(int i=0; i<4; i++)
	{	
		total = 0;
		for(int j=0; j<7; j++)
		{
			total += falldata[i][j];
			totalall += total;
		}
		printf("Week %d total: %dmm\n", i+1, total);
	}
	
	float avg = totalall/4.0;
	printf("Overall average: %.2fmm\n", avg);
	return 0;
}
		
