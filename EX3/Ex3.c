#include <stdio.h>
int main(void)
{
	int c[5]; //declaring an array for number of votes
	int i;                                      
	printf("Enter the number of votes:\n");
	for(i=0;i<5;++i) //for loop for entering number of votes
        {
		scanf("%d",&c[i]);
	}
        int highest = c[0];
        int candidate = 1;
	for(i = 1;i<5;++i)// for loop to calculate highest number of votes
	{	
		if(c[i]>highest)
		{
			highest=c[i];
			candidate = i+1;
		
		
		}
        }
	printf("Candidate %d wins with %d votes.\n",candidate,highest);
	return 0;
}
