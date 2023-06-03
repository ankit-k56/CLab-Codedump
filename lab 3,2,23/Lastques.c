#include<stdio.h>
int main(){
    int num, half,i,flag=1;

    for(num=200;num>=100;num--){  
        flag=1;
        for(i=2;i<=num/2;i++){ 
            if(num%i==0){
                flag=0;
                break; 
            } 
        }
        if(flag==1){            
            
            printf("%d ", num);
        }
        // else{
        //     printf("%d is not a prime number\n", num);
        // }      
        
    }
    
    return 0;

}