#include <stdio.h>

int main(void){
	int marks[10];
	float sum = 0;
	for(int i = 0; i<10; i++){
		printf("Enter the marks of the student%d: ",i+1);
		scanf("%d",&marks[i]);
		sum += marks[i];
	}

	float avg  = 0;
	avg = sum/10;
	printf("Average is:%.2f \n",avg);
	
	printf("Students scoring above average: "); 
	for(int j = 0; j<10 ; j++){
		if(marks[j]>avg){
			printf("%d,",marks[j]);
			
		}

		
	}
	printf("\n");

	return 0;
}
