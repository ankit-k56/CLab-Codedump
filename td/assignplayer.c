#include<stdio.h>
int main(){
    int score, count=0, i=0;
    
    repeat:
    printf("Enter the score of player %d: ", i+1 );
    scanf("%d", &score);
    if(score<0)goto repeat;
    if(score/100.0>=2){
        count++;
    }
    else{  
        count+=score/100.0; }  
    i++;
    if(i<3)goto repeat;
    
    printf("The total numbers of player who scored more than 100: %d", count);
    return 0;
}