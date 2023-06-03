#include<stdio.h>
int main(){
    int num;
    long temp =1;
    scanf("%d", &num);
    for(int i=1; i<=num;i++){
        temp = temp *i;

    }
    printf("%d", temp);

}