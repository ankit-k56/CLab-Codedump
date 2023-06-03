#include<stdio.h>
int main(){
    int score, score_sum=0, i=0;
    float avg;
    repeat:
    printf("Enter the score of player %d: ", i+1 );
    scanf("%d", &score);
    score_sum+=score;
    i++;
    if(i<11)goto repeat;
    
    printf("The total score off all the players is: %d\n", score_sum);
    printf("The average score is: %f", score_sum/11.0);
    return 0;
}