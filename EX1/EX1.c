#include <stdio.h>

float calculateAverage(int marks[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += marks[i];
    }

    return (float)sum / size;
}

int main()
{
    int marks[10] = {56, 78, 89, 65, 92, 70, 82, 60, 88, 73};

    float average;

    average = calculateAverage(marks, 10);

    printf("Class Average: %.1f\n", average);

    printf("Students scoring above average: ");

    for (int i = 0; i < 10; i++)
    {
        if (marks[i] > average)
        {
            printf("%d ", marks[i]);
        }
    }

    printf("\n");

    return 0;
}
