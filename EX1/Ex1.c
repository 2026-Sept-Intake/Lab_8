#include <stdio.h>

#define SIZE 10

float calAvg(int size, int mid_marks[]);
int abvAvg(int mid_marks[], int abv_marks[], int size, float avg);

int main(void)
{
    int i;
    int mid_marks[SIZE]; //array for mid exam marks
    int abv_marks[SIZE]; //array for marks above average

    printf("Enter the mid exam marks:\n");
    for (i = 0; i < SIZE; ++i) //for loop to read the entered mid exam marks
    {
        scanf("%d", &mid_marks[i]);
    }

    printf("Output:\n");
    float ans = calAvg(SIZE, mid_marks); //calling the fuction to calculate average
    printf("Average: %.1f\n", ans);

    int above = abvAvg(mid_marks, abv_marks, SIZE, ans);// calling the function to find marks above average
    printf("Students scoring above average: ");
    for (i = 0; i < above; ++i)
    {
        if (i > 0)
        {
            printf(", ");
        }
        printf("%d", abv_marks[i]);
    }
    printf("\n");

    return 0;
}

float calAvg(int size, int mid_marks[])
{
    int j;
    int sum = 0;
    for (j = 0; j < size; ++j)
    {
        sum += mid_marks[j];
    }
    return (float)sum / size;
}

int abvAvg(int mid_marks[], int abv_marks[], int size, float avg)
{
    int j;
    int count = 0;
    for (j = 0; j < size; ++j)
    {
        if (mid_marks[j] > avg)
        {
            abv_marks[count] = mid_marks[j];
            ++count;
        }
    }
    return count;
}
