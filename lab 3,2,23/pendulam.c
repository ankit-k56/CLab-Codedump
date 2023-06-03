#include<stdio.h>
#include<math.h>
int main(){
    int length=10;
    float T;
    for(length;length<=100; length+=10){
        T = 2*3.14*sqrt(length/9.8);
        printf("For length %d the value of time perido is: %f\n",length, T);      
    } 
    return 0;
}