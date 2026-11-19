#include <stdio.h>
float calculate_average(int marks[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+marks[i];
	}
	return (float)sum/n;
}
int main()
{
	int marks[10];
	printf("enter 10 marks: ");
	for (int i=0;i<10;i++)
	{
		scanf("%d",&marks[i]);
	}

	float avg=calculate_average(marks,10);
	printf("average: %.1f\n",avg);

	printf("student scoring above average: ");
	for(int i=0; i<10; i++)
	{
		if(marks[i]>avg)
		{
			printf("%d",marks[i]);
		}
	}
printf("\n");
return 0;
}

