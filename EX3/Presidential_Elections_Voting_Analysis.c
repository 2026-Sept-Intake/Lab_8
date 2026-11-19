#include<stdio.h>
int main (void)
{
        int votes[5];
        int highest_vote;
        int highest_pos = 1;

        for (int i=0;i<5;i++)
        {
                printf("ENTER THE VOTES OF CANDIDATE %d: ",i+1);
                scanf("%d",&votes[i]);
        }

        highest_vote = votes[0];
        for (int i=0;i<5;i++)
        {
                if(votes[i]>highest_vote)
                {
                        highest_vote = votes[i];
                        highest_pos = i+1;
                }
        }

        printf("CANDIDATE %d WIN WITH %d VOTES\n",highest_pos,highest_vote);

        return 0;
}


