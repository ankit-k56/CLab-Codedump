#include<stdio.h>
int main(){
    int num, half,i=2,flag=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    half= num/2;
    for(2;i<=half;i++){
        if(num%i==0){
            flag =0;
            break;          
        }
    }
    if(flag){
        printf("A prime number");
    }
    else{
        printf("Not a prime number");
    }
    return 0;

}