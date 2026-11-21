#include <stdio.h>

int main() 
{
    int size = 10;
    int marks[10];
    int sum = 0;

    printf("Enter marks for %d students:\n", size);
    for (int i = 0; i < size; i++) 
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];

    }

    double average = (double)sum / size;
    printf("\nAverage: %.1f\n", average);

    printf("Students scoring above average: ");
    int first = 1;
    for (int i = 0; i < size; i++) 
    {
        if (marks[i] > average) 
	{
            if (!first) 
	    {
                printf(", ");
            }
            printf("%d", marks[i]);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}

