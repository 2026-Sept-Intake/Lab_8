#include <stdio.h>

#define SIZE 10

float calculateAverage(int marks[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += marks[i];
    }
    return (float) sum / size;
}

void aboveAverage(int marks[], int size, float average){
    int first = 1;
    printf("Students scoring above average: ");
    for(int i = 0; i < size; i++){
        if (marks[i] > average){
            if(!first){
                printf(", ");
            }
            printf("%d", marks[i]);
            first = 0;
        }
    }
    printf("\n");
}

int main(){
    int marks[SIZE];

    printf("Enter the mid-term marks of %d students:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &marks[i]);
    }

    float average = calculateAverage(marks, SIZE);

    printf("Average: %.1f\n", average);
    aboveAverage(marks, SIZE, average);

    return 0;
}