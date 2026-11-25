#include<stdio.h>
int main(void)
{
	int marks[10];
	int sum=0;
	float average;

	printf("Enter marks of 10 students:\n");

	for( int i=0;i<10;i++)
	{
		scanf("%d", &marks[i]);
	}

	for(int i=0;i<10;i++)
	{
		sum=sum+marks[i];
	}
	average = sum/10.0;
printf("calculate the average of the class:%.1f\n",average);
printf("students scoring above average:");
for (int i=0;i<10;i++)
{
	if(marks[i]>average)
	{
		printf("%d,",marks[i]);

	}
}
printf("\n");
return 0;
}
