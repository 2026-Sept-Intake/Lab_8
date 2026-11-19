#include <stdio.h>

int main()
{
    int marks[10];
    int sum = 0;
    float average;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks of 10 students: ");
	scanf("%d",&marks[i]);
        sum = sum + marks[i];
    }

    average = (float)sum / 10;

    printf("Average: %.1f\n", average);

    printf("Students scoring above average: ");

    for (int i = 0; i < 10; i++)
    {
        if (marks[i] > average)
        {
            printf("%d ", marks[i]);
        }
    }

    return 0;
}

