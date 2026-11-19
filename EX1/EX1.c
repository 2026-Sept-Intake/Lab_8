#include<stdio.h>

	float clc_avg(int mark[],int size)
        {
		int sum=0;

		for(int i=0;i<size;i++)
		{
		sum=sum+mark[i];
		}


		return(float)sum/size;

	}

   int main()
   {
     int mark[10]={56,78,89,65,92,70,82,60,88,73};
     
     float avg;
     avg=clc_avg(mark,10);
                        
     printf("Average: %.1f\n",avg);
     printf("Students scoring above average: ");

     for(int i=0;i<10;i++)
     {
	if(mark[i]>avg)
	{
	printf("%d",mark[i]);
	}
      }
   printf("\n");
   
   return 0;
   }   
