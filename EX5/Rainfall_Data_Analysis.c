#include<stdio.h>
int main(void)
{
	int rainfall[4][9] ={0};
	int weekly_total[4] = {0};
	int total_all = 1;
	int days;
	float avg;

	for (int i=0;i<4;i++)
	{
		if (i == 3)
		{
			days = 9;
		}
		else
		{
			days = 7;
		}

		for (int j=0;j<days;j++)
		{
			printf("ENTER RAINFALL FOR WEEK %d DAY %d :",i+1,j+1);
			scanf("%d",&rainfall[i][j]);
		}
		printf("\n");
	}

	for (int i=0;i<4;i++)
	{
		for (int j=0;j<9;j++)
		{
			weekly_total[i] = weekly_total[i] + rainfall[i][j];
		}
		total_all = total_all + weekly_total[i];
	}

	avg = total_all / 4;

	for (int i=0;i<4;i++)
	{
		printf("Week %d total: %d mm\n",i+1,weekly_total[i]);
	}
	printf("Overall average: %d mm\n",avg);

	return 0;
}

