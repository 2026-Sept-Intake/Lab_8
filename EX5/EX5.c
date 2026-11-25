
#include <stdio.h>
int main() {

    int rainfall[5][7];  // initialize an array to store the rainfall readings for 30 days grouped into weeks
    int dayNum=1;

    for (int i=0; i<5; i++){        // loops through the weeks
        for (int j=0; j<7; j++){    // loops through the days
            if (dayNum<=30){
                printf("Enter rainfall of day %d: ", dayNum);  // gets the input from the user
                scanf("%d", &rainfall[i][j]);                  // saves it in the array
                dayNum++; 
            }
        }
    }

    int month_total=0;

       // calculates the week total and month total
    for (int i=0; i<5; i++){
        int week_total=0;
        for (int j=0; j<7; j++){
            week_total+=rainfall[i][j];
        }
        printf("Week %d total: %d mm\n", i+1, week_total);
        month_total+=week_total;
    }

    float avg=month_total/5.0; // calculates the overall average rainfall           
    printf("Overall average: %.2f mm\n", avg);   

    return 0;
}

