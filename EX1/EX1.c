#include<stdio.h>

float calculateAvg(int marks[], int size)

{
	int sum = 0;
	
	for (int i = 0; i < size; i++)

	{
	
	sum = sum + marks[i];
	
	}	

	return (float)sum / size;

}

int main()

{
	int marks[10] = {56, 78, 89, 65, 92, 70, 82, 60, 88, 73};
	float Avg;

		Avg = calculateAvg(marks, 10);

		printf("Avg: %.lf\n", Avg);
		printf("students scoring above Avg:");

		for(int i = 0; i < 10; i++)

			{
			if(marks[i] > Avg)
				{
				printf("%d ", marks[i]);
				}
			
			}


return 0;


}	
