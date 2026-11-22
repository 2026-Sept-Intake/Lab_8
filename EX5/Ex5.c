#include <stdio.h>

void CalRainfall(int raindata[4][9]);
void analyzeRainfall(int raindata[4][9]);

int main(void)
{
    
    int rainfall[4][9] = {0};

    CalRainfall(rainfall);
    analyzeRainfall(rainfall);

    return 0;
}

void CalRainfall(int raindata[4][9])
{
    int r, c; //row and column 
    int days;

    for (r = 0; r < 4; ++r)
    {
        if (r < 3)
	{   
	       	days = 7; // Weeks 1 to 3 have 7 days

        }			  
        else
	{	
            days = 9; // Week 4 has the remaining 9 days (30 days total) 
        }

        printf("Enter rainfall for Week %d (%d days): \n", r + 1, days);
        for (c = 0; c < days; ++c)
        {
            scanf("%d", &raindata[r][c]);
        }
    }
}

void analyzeRainfall(int raindata[4][9])
{
    int r, c;// row and column
    int weekly_total;
    int overall_total = 0;
    int average;

    for (r = 0; r < 4; ++r)
    {
        weekly_total = 0;

        for (c = 0; c < 9; ++c)
        {
            weekly_total += raindata[r][c];
        }

        printf("Week %d total: %d mm\n", r + 1, weekly_total);
        overall_total += weekly_total;
    }

    average = overall_total / 4;
    printf("Overall average: %d mm\n", average);
}
