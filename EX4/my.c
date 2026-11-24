#include <stdio.h>

int main(){
	int temp[7];
	int i, max, min;
	int hotDay = 0, coldDay = 0;

	printf("Enter temperatures for 7 days: \n");
	for (i = 0; i < 7; i++){
		scanf("%d" , &temp[i]);
	}

	max = temp[0];
	min = temp[0];

	for (i = 1; i < 7; i++){
		if (temp[i] > max){
			max = temp[i];
			hotDay = i;
		}
		if (temp[i] < min) {
			min = temp[i];
			coldDay = i;
		}
	}

	printf("Hottest day: Day %d with %d degrees.\n" , hotDay + 1, max);
	printf("Coldest day: Day %d with %d degrees." , coldDay + 1, min);
	
	return 0;
}
