#include <cs50.h>
#include <stdio.h>
  
    int TOTALPOITNSEARNED;
    int TOTALPOINTSPOSSIBLE;
int main(void){
    int assignments = get_int("How many different assignments:\n");
    int pointsEarned[assignments];
    int pointsPossible[assignments];
    for (int x = 0; x < assignments;x++){
        pointsEarned[x] = get_int ("Points earned on assignment #%d:\n",x+1);
        pointsPossible[x] = get_int ("Points possible earned on assignment #%d:\n",x+1);}
    float divide=(pointsEarned/pointsPossible);
    printf ("Final grade: %f\n",divide);
    }
