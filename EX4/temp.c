#include <stdio.h>

void min(int arr[]);
void max(int arr[]);

int main(void)
{
	int temps[7];
	
	for(int i=0; i<7; i++)
	{
		printf("Enter the temperature value for day %d: ", i+1);
		scanf("%d", &temps[i]);
	}

	max(temps);
	min(temps);

	return 0;
}

void max(int arr[])
{
        for( int i=0; i<7; i++)
        {
                if(max < arr[i])
                {
                        max = arr[i];
                        maxp = i+1;
                }
	}
	printf("Hottest day: Day %d with %d degrees\n", maxp, max);
}

void min(int arr[])
{
        for( int i=0; i<7; i++)
        {
                if(min > arr[i])
                {
                        min = arr[i];
                        minp = i+1;
                }
        }

        printf("Coldest day: Day %d with %d degrees\n", minp, min);
}

