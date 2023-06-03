#include<stdio.h>
int prime(int n){
    int flag = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag =0;
            return 0;
            break;
        }
    }
    printf("\nThe %d is a prime number", n);
    return flag;
}
int main(){
    int num;
    for(int i = 100; i>=10;i--){
        prime(i);
    }
    return 0;
}