#include  <stdio.h>

int main(){
	int marks[10];
	int i, sum = 0;
	float avg;

	printf("Enter 10 marks: \n");
		for(i = 0; i < 10; i++){
			scanf("%d" , &marks[i]);
		}


	for (i = 0; i < 10; i++){
		sum = sum + marks[i];
	}

	avg = sum / 10.0;

	printf("Average: %.1f\n" , avg);
	printf("Students scoring above average: ");

	for(i = 0; i < 10; i++){
		if(marks[i] > avg)
			printf("%d " , marks[i]);
	}
	return 0;
}
