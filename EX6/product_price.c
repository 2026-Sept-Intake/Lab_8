#include<stdio.h>
int main (void)
{
	int index[2]; // index[0]: position of the most expensive product
		      // index[1]: position of the least expensive product
	
	// most/least: highest and lowest price found so far
        // start at extreme values so the first price always replaces them
        // price[10]: price of each product
	float most=-999999,least=999999,price[10];

	// name[10][16]: name of each product (up to 15 characters)
        // name[i] and price[i] describe the same product (parallel arrays)
	char name[10][16];
	for(int i=0;i<10;i++) //reading the 10 products
	{
		printf("Enter the name & the price of the product no:%d respectively\n",i+1);
		scanf("%15s %f",name[i],&price[i]);
		if(price[i]>most) //checking if current price higher than the highest price found so far
		{
			most=price[i];
			index[0]=i;
		}
		if(price[i]<least)
		{
			least=price[i];
			index[1]=i;
		}
	}
	//use the saved positions to print the maticng product names
	printf("Most expensive product: %s ($%.2f)\nLeast expensive product: %s ($%.2f)\n",name[index[0]],most,name[index[1]],least);
	return 0;
}
