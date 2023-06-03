#include <stdio.h>
int table(int n){
    for(int i=1;i<=10;i++){
        printf("%d",i*n);
    } 
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    table(n);
    return 0;
}