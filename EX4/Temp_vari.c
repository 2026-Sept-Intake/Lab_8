#include<stdio.h>
void calctemp(int *h,int *c,int t[],int *cday,int *hday);
int main (void)
{
	int hot,cold,temp[7],cday,hday; //hot & cold are temps of the hottest and coldest days respectively, temp is an int array for the temps of the 7 days , cday and hday are the hottest and coldest day numbers respectively
	for(int i=0;i<7;i++)
	{
		printf("Enter the temp of the day %d\n",i+1);
		scanf("%d",&temp[i]);
	}
	calctemp(&hot,&cold,temp,&cday,&hday);
	printf("Hottest day: Day %d with %d degrees\n",hday,hot);
	printf("Coldest day: Day %d with %d degrees\n",cday,cold);
	return 0;
}
void calctemp(int *h,int *c,int t[],int *cday,int *hday)
{
	*h=t[0]; //making hottest temp = first array index
	*c=t[0];
	for(int i=0;i<7;i++)
	{
		if (t[i]>*h) //checking if current value of the array geater than hottest temp
		{
			*h=t[i];
			*hday=i+1; //i+1 since array i starts from 0 due to array indexing
		}
		if (t[i]<*c)
		{
			*c=t[i];
			*cday=i+1;
		}
	}
}
