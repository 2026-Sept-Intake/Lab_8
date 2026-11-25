#include<stdio.h>
#define SIZE 10

int main(void)
{
	int mark[SIZE];
	int i;
	for(i=0; i<SIZE; i++){
		printf("Input Mark : ");
		scanf("%d", &mark[i]);
	}

	int sum=0;

	for(i=0; i<SIZE; i++){
		sum = sum + mark[i];
	}
	
	float avg = sum/SIZE;
	
	printf("Average: %.1f\n", avg);
	printf("Students scoring above average:");
	
	int count = 0;

	for (i=0; i<SIZE; i++){
		if (mark[i]>avg){
			if (count>0){
				printf(",");
			}

			printf(" %d", mark[i]);		
			
			count++;	
		}
	}

	printf("\n");

	return 0;
}
