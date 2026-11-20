#include<stdio.h>
int main (void)
#define SIZE 10 //size is 10 since only 10 students
{
	int marks[SIZE],sum=0; //size int array to store the marks of the students
	float avg;
	for(int i=0;i<SIZE;i++) //for loop to take user inputs for to the array named marks & to calc sum
	{
		printf("enter marks\n");
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	avg=(float)sum/SIZE; //sum converted to float
	printf("Average: %.1f\n",avg);
	printf("Students scoring above average: ");
        int first = 1; //to manage the comma after the marks of above avg students
        for (int j = 0; j < SIZE; j++)
        {
                if (marks[j] > avg)
                {
                        if (!first) //since first = 1 at the start its skipped 
		       	{
                                printf(", "); //comma after the marks of one above avg student
                        }
                        printf("%d", marks[j]);
                        first = 0; //first = 0 after printing once
                        }
       }
       printf("\n");
       return 0;
}
