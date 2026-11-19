#include <stdio.h>
#define CANDIDATES 5

int winner(int votes[], int size){

    int winner = 0;
    for(int i = 1; i < size; i++ )
    if(votes[i] > votes[winner]){
        winner = i;
    }
    return winner;
}

int main(){

    int votes[CANDIDATES];

    for(int i = 0; i < CANDIDATES; i++){
        printf("Enter votes for candidate %d: ", i+1);
        scanf("%d", &votes[i]);
    }

    int winner = findWinner(votes, CANDIDATES);

    printf("Candidate %d wins with %d votes.\n", winner + 1, votes[winner]);


    return 0;
}