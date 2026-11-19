#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0;
    float average;

    printf("Enter marks of 10 students:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 10.0;

    printf("Average: %.1f\n", average);

    printf("Students scoring above average: ");

    for (int i = 0; i < 10; i++) {
        if (marks[i] > average) {
            printf("%d ", marks[i]);
        }
    }

    return 0;
}

