#include<stdio.h>
int main()	
		
{
char *products[10] = {"apple", "banana", "orange", "mango", "grapes", "peach", "plum", "pear", "lemon", "kiwi"};

float prices[10] = {5.99, 12.50, 7.25, 10.00, 15.75, 9.99, 8.30, 6.50, 11.40, 4.99};

	int i;
	int maxindex = 0;
	int minindex = 0;

	for(i = 1; i < 10; i++)
	{
	if(prices[i] > prices[maxindex])
		{
		maxindex = i;
		}
	if(prices[i] < prices[minindex])
		{
		minindex = i;
		}
	}

printf("most expensive product: %s ($%.2f)\n", products[maxindex], prices[maxindex]);
printf("least expensive product: %s ($%.2f)\n", products[minindex], prices[minindex]);

return 0;


}		
		
		
		
