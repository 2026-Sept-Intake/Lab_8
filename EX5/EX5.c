#include<stdio.h>
int main(){

	int rainfall[4][7]={
		{3,0,5,2,0,1,6},
		{7,0,3,4,2,8,5},
		{2,1,5,3,0,2,7},
                {6,0,8,2,4,3,3}

	};

	int i,j;
	int total=0;
	int weekly_total;


	for(i==0;i<4;i++)
	{
		weekly_total=0;

	for(j=0;j<7;j++){

	weekly_total+=rainfall[i][j];
	}

	printf("week %d total:%d mm\n",i+1,weekly_total);
	total+=weekly_total;

	}


   printf("overall average:%d mm\n",total/4);
return 0;
}
