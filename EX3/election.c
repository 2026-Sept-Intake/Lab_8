#include <stdio.h>
#define votes 5
int main(void)
{
	int count[votes],wins = 0,position;
	for (int i = 0; i < votes; i++)
	{
		printf("enter the count\n");
		scanf("%d" , &count[i]);
		if (count[i]>wins)
		{
			wins = count[i];
			position = i+1;
		}
	}
	printf("Candidate %d wins with %d votes %d\n" , position,wins,votes);
	return 0;
}

