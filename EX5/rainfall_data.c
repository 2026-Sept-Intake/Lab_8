#include<stdio.h>
int main (void)
{
	int rain[4][7],weekly[4]={0},TOTAL=0; //rain[4][7] is rainfall for 4 weeks, 7 days each
					      // weekly[4] is total rainfall of each week (all set to 0 to start)
					      // TOTAL: rainfall of the whole month
	for(int i=0;i<4;i++) // Loop through each week
	{
		for(int j=0;j<7;j++) // Loop through each day of the current week
		{
			printf("Enter the rainfall of week %d, day %d\n",i+1,j+1);
			scanf("%d",&rain[i][j]);
			weekly[i]+=rain[i][j];
		}
		TOTAL+=weekly[i];
	}
	for(int i=0;i<4;i++) // Loop to print all the weekly data
	{
		printf("Week %d total: %d mm\n",i+1,weekly[i]);
	}
	printf("Overall average: %.2f mm\n",(float)TOTAL/4);
	return 0;
}
