#include<stdio.h>

int sum(int n){
    return n/10?n%10+sum(n/10):1;
}
int main(){
    int num,s; 
    printf("Enter the number: ");
    scanf("%d", &num);
    s = sum(num);
    printf("The sum of all teh digits of number n is: %d", s);
    return 0;
}
