#include <stdio.h>
int main()
{
    int marks[10];
    int total = 0;
    float average;

    for(int i = 0; i < 10; i++)
{
    printf("Enter marks of student %d: ", i + 1);
    scanf("%d", &marks[i]);

    total = total + marks[i];
}

 average = total / 10.0;

 printf("\nClass Average = %.2f\n", average);

 printf("\nStudents scoring above average:\n");

for(int i = 0; i < 10; i++)
{
    if(marks[i] > average)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
}

      return 0;
      }

