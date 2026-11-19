#include <stdio.h>

void search_hottemp(int rec[]);
void search_coldtemp(int rec[]);
int temp,hday,cday,hdtemp,cdtemp;
int rec[7];

int main (void)
{
	for(int i=0; i <7 ;i++)
        {
                printf("Enter day%d temperature:",i+1);
                scanf("%d",&rec[i]);
	}
	search_hottemp(rec);
	search_coldtemp(rec);
}

void search_hottemp(void)
{
	for(int i=0; i<7;i++)
	{
		if(i==0)
			hdtemp = rec[0];

		if(hdtemp<rec[i])
		{
			hdtemp = rec[i];
			hday = i+1;
		}
	}
	printf("Hottest day:Day %d with %d degrees.",hday,hdtemp);
}

void search_coldtemp(void)
{
	for (int i =0; i<7;i++)
	{	
		if(i==0)
			cdtemp = rec[0];
		if(cdtemp>rec[i])
		{
			cdtemp = rec[i];
			cday = i+1;
		}
	}
	printf("Coldest day:Day %d with %d degrees.",cday,cdtemp);

}
