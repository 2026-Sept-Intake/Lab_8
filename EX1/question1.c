#include <stdio.h>

int main (void)
{
	int marks[10];
	int i = 0;
	int count = 1;
	int sum;
	float avg;

	for (int i=0; i<10; i++)
	{
		printf("Input mid term mark %d:",count);
		scanf("%d",&marks[i]);
		count ++;
		sum = sum + marks[i];


	}

	printf("Average: %.2f\n",sum/10.00);
	printf("Students scoring above average:");
	for (int i=0 ; i<10; i++)
	{
		if(avg<marks[i])
		{
			printf("%d,",marks[i]);
		}

	}
	return 0;
}
