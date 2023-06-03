#include<stdio.h>
int hcf(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        return hcf(a-b,b);
    } else if(a<b){
        return hcf(a,b-a);
    }
}
int main(){
    int a,b;
    printf("Enter teh value of a and b");
    scanf("%d%d",&a,&b);
    int  hcf1 = hcf(a,b);
    printf("The hcf of two numbers is: %d", hcf1);
}