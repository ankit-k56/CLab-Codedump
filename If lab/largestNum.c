#include<stdio.h>
int main(){
    int a , b ,c;
    printf("Enter the value of a b c respectively: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b){
        a=b;
    }
    if(a<c){
        a=c;
    }
    printf("The largest number is %d", a);
    return 0;
}