#include <stdio.h>
#define SIZE 10  // Number of Students in the Class

// Function to Prompt the User and Read Student Marks into the Array
void input_marks(int marks[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter the Marks of the Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

// Function to Calculate the Average of the Marks
float calculate_average(int marks[], int size) {
    int sum = 0; 

    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }

    return (float)sum / size;
}

// Function to Print the Marks greater than the Average
void above_average(int marks[], int size, float average) {
    printf("Students Scoring above Average: ");
    int first = 1;
    
    for (int i = 0; i < size; i++) {
        if (marks[i] > average) {
            if (first == 0) {
                printf(", ");  // Print Comma before Every Match after the First
            }
            printf("%d", marks[i]);
            first = 0;  // Mark that at Least One Score has been Printed
        }
    }
    printf("\n");  // Move to a New Line after Listing Scores
}

int main(void) {
    int marks[SIZE];  // Array to Store 10 Student Marks

    input_marks(marks, SIZE);  // Read Marks from User
    float average = calculate_average(marks, SIZE);  // Compute Class Average

    printf("\nAverage: %.2f\n", average); // Print Average
    above_average(marks, SIZE, average);  // Print Marks Above Average

    return 0;
}
