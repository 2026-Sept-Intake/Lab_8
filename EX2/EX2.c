#include <stdio.h>
#define PLAYERS 11

int HighestIndex(int scores[], int size){

    int max = 0;

    for(int i =1; i < size; i++){
        if(scores[i] > scores[max]){
            max = i;
        }
    }
    return max;
}

int main(){
    int scores[PLAYERS];

    printf("enter the scores of %d players in order", PLAYERS);
    for(int i = 0; i < PLAYERS; i++ ){
        scanf("%d", &scores[i]);
    }

    int best = HighestIndex(scores,PLAYERS);

    printf("Highest score: %d by player %d\n", scores[best], best + 1);


    return 0;
}