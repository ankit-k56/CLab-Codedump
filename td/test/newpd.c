#include<stdio.h>
int main(){
    int n,temp,j=0;
    printf("hjhjhj: ");
    scanf("%d",&n);
    temp = n;
    while(temp>0){
        j =(j * 10)+(temp%10);
        temp/=10;
    }
    if(j==n){
        printf("It is a planadrome");
    }
    else{
        printf("It is not a plandorme");
    }
}