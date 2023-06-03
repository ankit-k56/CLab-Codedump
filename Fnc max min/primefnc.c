#include<stdio.h>
int prime(int n){
    int flag = 1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag =0;
            break;
        }
    }
    return flag;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(prime(num)){
        printf("The given number is a prime");

    } else{
        printf("The given number is not prime");
    }
    return 0;
}