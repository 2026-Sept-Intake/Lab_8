#include <stdio.h>
int main ()
{
	int rainfall[4][7];
	int weeklytotal[4];
	int total = 0;
	float average;

	for(int i = 0; i < 4; i++)
	{
		printf("Enter rainfall for week %d:\n", i + 1);
		weeklytotal[i] = 0;

		for(int j = 0; j < 7; j++)
	    {
		scanf("%d", &rainfall[i][j]);
	    }
	}
	    for(int i = 0; i < 4; i++) {
	        weeklytotal[i] = 0;

	        for(int j = 0; j < 7; j++) {
	            weeklytotal[i] = weeklytotal[i] + rainfall[i][j];
	        }
		
		total = total + weeklytotal[i];
		printf("Week %d total: %d mm\n",i + 1, weeklytotal[i]);
	}
	    average = total/4.0;

	    printf("Overall average: %.1f mm\n",average);
	    
	    return 0;
}
	      
