#include <stdio.h>
 // function prototypes
void hottest(int temp[], int size);  
void coldest(int temp[], int size);
int main() {

    int temp[7]; // initializes an array to store 7 temperature values

    for (int i=0; i<7; i++){
     printf("Enter the temperature of day %d:\n", i+1);  // gets the inputs from the user
     scanf("%d", &temp[i]);                              // saves the values in the array
    }

    hottest(temp, 7); // function call
    coldest(temp, 7); // function call
    return 0;
}
  // function to find the hottest day
void hottest(int temp[], int size){

    int highest_temp=temp[0];
    int hottest_day=0;

    for (int i=1; i<7; i++){
        if (temp[i]> highest_temp){
            highest_temp=temp[i];
            hottest_day=i;
        }
    }
    printf("Hottest day: Day %d with %d degrees.\n", hottest_day+1, highest_temp);
}
  // function to find the coldest day
void coldest(int temp[], int size){

    int lowest_temp=temp[0];
    int coldest_day=0;

    for (int i=1; i<7; i++){
        if (temp[i]<lowest_temp){
            lowest_temp=temp[i];
            coldest_day=i;
        }
    }
    printf("Coldest day: Day %d with %d degrees.\n", coldest_day+1, lowest_temp);
}
