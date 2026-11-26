#include<stdio.h>
int main()

{
	int rainfall[4][7] = {
		{3, 0, 5, 2, 0, 1, 6},
		{7, 0, 3, 4, 2, 8, 5},
		{2, 1, 5, 3, 0, 2, 7},
		{6, 0, 8, 2, 4, 3, 3}
	};


	int i, j;
	int total = 0;
	int weeklytotal;

	for(i = 0; i < 4; i++)
	{
	weeklytotal = 0;

	for(j = 0; j < 7; j++)
	{
	weeklytotal += rainfall[i][j];
	}
	printf("week %d total: %d mm\n", i + 1, weeklytotal);
	total += weeklytotal;
	}

printf("overall average: %d mm\n", total / 4);

return 0;

	
}
