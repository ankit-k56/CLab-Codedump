#include<stdio.h>
int main(){
    char lm;
    int lp;
    printf("jinjnef: ");
    scanf("%c", &lm);
    lp = lm;
    if(lp>=97 && lp <=122){
        printf("The capital Value of lm is: %c", lm-32);
    }
    else if(lp>=65 && lp <=90){
        printf("The opposite value of lm is: %c", lm+32);
    }
    else{
        printf("This is not a character");
    }

}