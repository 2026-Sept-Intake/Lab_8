#include <stdio.h>

int main(void)
{
	int sum, marks[10];
	float avg;

	for(int i=0; i<10; i++)
	{
		printf("Enter mark %d: ", i+1);
		scanf("%d", &marks[i]);
		sum += marks[i];
	}
	
	avg = sum/10.0;
	printf("Average: %.2f\nStudents scoring above average: ", avg);

	int count = 0;

	for(int i=0; i<10; i++)
	{
		if(marks[i] > avg)
		{
			printf("%d", marks[i]);
			if(i == 9)
				break;
			else
				printf(",");
		}
	}
	printf("\n");
	return 0;
}
