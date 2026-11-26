#include<stdio.h>
int main(void)
{
	int rain[4][9],i,j,total=0,weeks[4]={7,7,7,9},sum;
	printf("Enter the rainfall data for 30 days:\n");
        for(i=0;i<4;i++)
	{	
		for(j=0;j<weeks[i];j++)
		{
			printf("week %d day %d: ",i+1,j+1);
			scanf("%d",&rain[i][j]);
		}
             	
	}
	for(i=0;i<4;i++)
	{
		sum = 0;
		for(j=0;j<weeks[i];j++)
		{
			sum = sum + rain[i][j];
		}
		printf("Week %d total: %dmm\n",i+1,sum);
		total = total + sum;
	}
        float avg = total/4.0;
	printf("Overall average: %fmm\n",avg);
        return 0;
}

	
