#include<stdio.h>
int main(){
    float P, Q ,R , S;
    printf("Enter the value of P Q R S respectively: ");
    scanf("%f%f%f%f", &P,&Q,&R,&S);
    if(P*S==Q*R){
        printf("Wheat stone bridge is balannced: ");               
    }
    else{ 
        printf("Wheat stone bridge is not balannced"); 
        S = (Q*R)/P; 
        printf("The variable resistance is: %f", S);
    }
    return 0;
    
}