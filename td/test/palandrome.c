#include<stdio.h>
int main(){
    int n,temp,j=0;
    printf("hjhjhj: ");
    scanf("%d", &n);
    temp = n;
    while(temp>0){
        j =(  j * 10)+(temp%10);
        temp/10;
    }
    printf("%d", j);
}