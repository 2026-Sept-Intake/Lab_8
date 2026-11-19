#include<stdio.h>
int main (void)
{
	int marks[10];
	float sum=0;
	float avg;
	for (int i=0;i<10;i++)
	{
		printf("ENTER THE MARK OF STUDENT %d: ",i+1);
		scanf("%d",&marks[i]);
	}

	for (int i=0;i<10;i++)
	{
		sum=sum+marks[i];
	}
	
	avg=sum/10;
	printf("THE AVERAGE OF THE MARKS: %.2f\n",avg);

	for(int i=0;i<10;i++)
	{

		if(marks[i]>avg)
		{	
			printf("STUDENT SCORING ABOVE AVERAGE: %d\n",marks[i]);
		}	
	}


	return 0;
}
