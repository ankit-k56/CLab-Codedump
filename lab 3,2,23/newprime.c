#include<stdio.h>
int main(){
    int num=200, half,i=2,flag=1;

    for(num=200;num>=100;num--){ 
        flag=1; 
        
        for(i=2;i<=num/2;i++){ 
            if(num%i==0){
                flag=0;
                break; 
            } 
        }
        if(flag==0){
            printf("%d is not a prime number\n", num);
        }
        else{
            printf("%d is a prime number\n", num);
        }      
        
    }
    
    return 0;

}