#include<stdio.h>
int main()

{
	int temp[7] = {22, 25, 20, 30, 28, 24, 26};
	int highest = temp[0];
	int lowest = temp[0];
	int i, hotday = 1, coldday = 1;


	for(i = 0; i < 7; i++)
	{
	if(temp[i] > highest)
		{
		highest = temp[i];
		hotday = i + 1;
		}
	if(temp[i] < lowest)
		{
		lowest = temp[i];
		coldday = i + 1;
		}
	}	

printf("hottest day: day %d with %d degrees\n", hotday, highest);
printf("coldest day: day %d with %d degrees\n", coldday, lowest);

return 0;

}
