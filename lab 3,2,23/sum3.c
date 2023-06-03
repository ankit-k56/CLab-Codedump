#include<stdio.h>
int main(){
    int sum=0,i=0;
    for(i;i<100;i++){
        if(i%3){            
            sum+=i;
        }
    }
    printf("The sum all numbers divisible by 3 till 100 are: %d", sum);
    return 0;
}