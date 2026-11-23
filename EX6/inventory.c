#include <stdio.h>

int most(float prices[]);
int least(float prices[]);

int main(void)
{
	char names[10][10];
	float prices[10];

	for(int i=0; i<10; i++)
	{
		printf("Enter name of product %d: ", i+1);
		scanf("%10s", names[i]);
	}

	for(int i=0; i<10; i++)
	{
		printf("Enter price for product %d: ", i+1);
		scanf("%f", &prices[i]);
	}

	int mexp = most(prices);
	int lexp = least(prices);

	printf("\nMost expensive product: %s ($%.2f)\n", names[mexp], prices[mexp]);
	printf("Least expensive product: %s ($%.2f)\n", names[lexp], prices[lexp]);
	return 0;
}

int most(float prices[])
{	
	int max = prices[0];
	int maxpos = 0;
	for(int i=0; i<10; i++)
	{
		if( max < prices[i] )
		{
			maxpos = i;
			max = prices[i];
		}
	}

	return maxpos;
}

int least(float prices[])
{
	int min = prices[0];
	int minpos = 0;
	for(int i=0; i<10; i++)
	{
		if( min > prices[i] )
		{
			minpos = i;
			min = prices[i];
		}
	}

	return minpos;
}




