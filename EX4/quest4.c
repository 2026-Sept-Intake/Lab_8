#include<stdio.h>
int hot_day(int temp[],int size)
{
	int i,max,p;
	max = temp[0];
	p = 0;
	for(i=0;i<size;i++)
	{
		if(temp[i]>max)
		{
			max = temp[i];
			p = i;
		}
	}
	return  p;
}
int cold_day(int temp[],int size)
{
	int i,min,p;
	min = temp[0];
	p = 0;
	for(i=0;i<size;i++)
	{
		if(temp[i]<min)
		{
			min = temp[i];
			p = i;
		}
	}
	return p;
}
int main(void)
{
	int temp[7],i,hot,cold;
	printf("enter the temperatures recorded on 7 days :\n");
	for(i=0;i<7;i++)
	{
		printf("day %d : ",i+1);
		scanf("%d",&temp[i]);
	}
	printf("\n");
        hot = hot_day(temp,7);
	cold = cold_day(temp,7);
	printf("Hottest day : Day %d with %d degrees.\n",hot+1,temp[hot]);
	printf("Coldest day : Day %d with %d degrees.\n",cold+1,temp[cold]);
	return 0;
}
