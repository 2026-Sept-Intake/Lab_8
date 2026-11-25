#include <stdio.h>
int main(void){  

   int marks[10]; //initialize an integer array to store 10 marks
   int total_m=0;
   float avg=0;

   for(int i=0; i<10; i++){
	printf("Enter the marks of student %d\n", i+1); // getting the 10 marks
	scanf("%d", &marks[i]);         
	total_m= total_m+marks[i];
   }
   
   avg=total_m/10.0;                // calculating the average 
   printf("Average: %.2f\n", avg);

   printf("Students scoring above average: ");
   for(int k=0; k<10; k++){
         if(marks[k]>avg){            // comparing each mark with average to get the marks that are higher than the average
         printf("%d, ", marks[k]);}	     
   }
   return 0; 
}	

