#include <stdio.h>
int calHotday(int temp[],int size);
int calColdday(int temp[],int size);
int main(void)
{
	int temp[7];
	int i;
	printf("Enter the temperatures for 7 days:\n");
	for(i=0;i<7;++i)
	{
		scanf("%d",&temp[i]);
	}
       int hot = calHotday(temp,7);	
       int cold = calColdday(temp,7);
       printf("Hottest day: Day %d with %d degrees\n",hot+1,temp[hot]);
       printf("Coldest day: Day %d with %d degrees\n",cold+1,temp[cold]);
       return 0;



}	
int calHotday(int temp[],int size)
{       int temphot = 0; 
	for(int i = 1;i<size;++i)
	{
		if(temp[i]>temp[temphot])
		{	
		       temphot = i;
		}

         
	}	
        return temphot;
}	
int calColdday(int temp[],int size)
{
	int tempcold = 0;
	for(int i = 1;i<size;++i)
	{
		if(temp[i]<temp[tempcold])
		{
			tempcold = i;

		}
	}
        return tempcold;
}
