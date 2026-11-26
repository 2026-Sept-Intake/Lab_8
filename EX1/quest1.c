#include<stdio.h>
float calculate_average(int marks[],int size );
int main(void)
{
	float avg;
	int marks[10],count=0,i;
	printf("Enter the students marks: \n");
	for(i=0;i<10;i++)
	{
		printf("student%d :",i+1);
		scanf("%d",&marks[i]);
	}
	avg = calculate_average(marks,10);
	printf("average : %.1f\n",avg);
	printf("students scoring above average:");
	for(i=0;i<10;i++)
	{
		if (marks[i] > avg)
		{
			if(count>0)
			{
				printf(" , ");
			}
			printf("%d ",marks[i]);
			count = count +1;
		}
	}
	printf("\n");
	return 0;
}
float calculate_average(int marks[] ,int size)
{
	int sum = 0;
	int i;
	for(i=0;i<size;i++)
	{
		sum = sum + marks[i];
	}
	return (float)sum/size;
}




