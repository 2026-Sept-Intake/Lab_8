#include <stdio.h>

float calculateAverage(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return (float)sum / size;
}

void printAboveAverage(int marks[], int size, float avg) {
    printf("Students scoring above average: ");
    for (int i = 0; i < size; i++) {
        if (marks[i] > avg) {
            printf("%d ", marks[i]);
        }
    }
    printf("\n");
}

int main() {
    int marks[10] = {56, 78, 89, 65, 92, 70, 82, 60, 88, 73};

    float avg = calculateAverage(marks, 10);
    printf("Average: %.1f\n", avg);
    printAboveAverage(marks, 10, avg);

    return 0;
}
