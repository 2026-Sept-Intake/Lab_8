#include <stdio.h>
#define DAYS 7

int findHottestDay(int temps[], int size){
    int hot = 0;
    for(int i = 1; i < size; i++){
        if(temps[i]>temps[hot]){
            hot = i;
        }
    }
    return hot;
}

int findColdestDay(int temps[], int size){
    int cold = 0;
    for(int i = 1; i < size; i++){
        if(temps[i]<temps[cold]){
            cold = i;
        }
    }
    return cold;
}

int main(){

    int temps[DAYS];

    for (int i = 0; i < DAYS; i++){
        printf("Enter the temperatures for day %d: ", i+1);
        scanf("%d", &temps[i]);
    }

    int hot  = findHottestDay(temps, DAYS);
    int cold = findColdestDay(temps, DAYS);

    printf("Hottest day: Day %d with %d degrees.\n", hot + 1, temps[hot]);
    printf("Coldest day: Day %d with %d degrees.\n", cold + 1, temps[cold]);

    return 0;
}