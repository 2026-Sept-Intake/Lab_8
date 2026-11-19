#include <stdio.h>

int main(void){
	int rain[4][7];
	float sum1 = 0;
	float sum2 = 0;
	float sum3 = 0;
	float sum4 = 0;

	for(int i = 0; i<4;i++){
		for(int j = 0; j<7; j++){
			printf("Enter the rainfall: ");
			scanf("%d",&rain[i][j]);
			switch(i){
				case 0:	
				      sum1 += rain[i][j];
				      break;
				case 1:
				      sum2 += rain[i][j];
				      break;
				case 2:
				      sum3 += rain[i][j];
				      break;
				case 3:
				      sum4 += rain[i][j];
				      break; 
			}
			  
		}
	

	}

                        printf("Week 1 total: %.0f mm\n",sum1);
                        printf("Week 2 total: %.0f mm\n",sum2);
                        printf("Week 3 total: %.0f mm\n",sum3);
                        printf("Week 4 total: %.0f mm\n",sum4);
                        printf("Overall average: %.0f mm\n",(sum1+sum2+sum3+sum4)/4);
	


	return 0;
}

