#include <stdio.h>
#define SIZE 11
int main(void)
{
	int score[SIZE],high=0,position;
    for (int i = 0; i < SIZE; i++)
    {
       printf("enter the score\n");
       scanf("%d",&score[i]);
       if(score[i]>high)     
       { 
	       high=score[i];
	       position=i+1;
	      
       }
    
    }
     printf("Highest score; %d by player %d\n",high,position);
     return 0;
}
           
 

