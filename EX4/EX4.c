#include <stdio.h>

void findTemps(float temp[], int size);

int main ()
{
	float temp[7];

	for (int i = 0; i < 7; i++)
	{
		printf("Enter temperatures of days:\n");
		scanf("%f", &temp[i]);
	}
	findTemps(temp, 7);
	return 0;
}
void findTemps(float temp[], int size) {
	float hottest = temp[0];
	float coldest = temp[0];

	int hotDay = 0;
	int coldDay = 0;

	for (int i = 1; i < size; i++)
	{
		if (temp[i] > hottest)
		{
			hottest = temp[i];
			hotDay = i;
		}
	}
	printf("Hottest day: Day %d with %.1f degrees.\n",
			hotDay + 1, hottest);

	printf("Coldest day: Day %d with %.1f degrees.\n",
			coldDay + 1, coldest);
}
