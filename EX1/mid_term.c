#include <stdio.h>
float calculateAverage(int marks[], int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum = sum + marks[i];
    }
    return sum / (float)n;
}

void printAboveAverage(int marks[], int n, float avg) {
    int i;
    printf("Students scoring above average: ");
    for (i = 0; i < n; i++) {
        if (marks[i] > avg) {
            printf("%d ", marks[i]);
        }
    }
    printf("\n");
}

int main(void)
{
    int marks[10];
    int i;
    float avg;

    printf("Enter 10 marks: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
    }

    avg = calculateAverage(marks, 10);
    printf("Average: %.1f\n", avg);
    printAboveAverage(marks, 10, avg);

    return 0;
}

