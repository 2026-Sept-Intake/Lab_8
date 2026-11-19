#include <stdio.h>

int main(void){
	int temp[7];
	for(int	i = 0; i < 7; i++){
		printf("Enter the temparature of the day %d: ",i+1);
		scanf("%d",&temp[i]);
		
	}
	
	int max = temp[0];
	int min = temp[0];
	int positionMax = 0;
	int positionMin = 0;
	for(int j = 0; j <7 ; j++){
		if(max < temp[j]){
			max = temp[j];
			positionMax = j+1;
		}
	       	if (min > temp[j]){
			min = temp[j];
			positionMin = j+1;
		}

	}

	printf("Hottest day : Day %d with %d degrees\n",positionMax,max);
	printf("Coldest day : Day %d with %d degrees\n",positionMin,min);

	
	return 0;
}
