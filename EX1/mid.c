#include <stdio.h>

int main(void){

	int marks[10];
	float Avg;
	int sum = 0;

	for(int i = 0; i<10; i++){

		printf("Enter Marks:");
		scanf("%d", &marks[i]);

		sum = sum + marks[i];
	}

	Avg = sum/10.0;

	printf("Average: %f\n", Avg);

	printf("Students scoring above average:");

	for(int i = 0; i<10; i++){

		if(marks[i]>Avg){

		printf(" %d", marks[i]);
		}
	}
	return 0;
}

		

			

	
