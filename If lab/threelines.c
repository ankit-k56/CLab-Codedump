#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the value of x1 y1 x2 y2 x3 y3 :");
    scanf(" %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if(x1*(y2-y3)-y1*(x2-x3)+ (x2*y3 - x3*y2)==0){
        printf("These points will not form triangle");
    }
    else{
        printf("These points will form triangle");
    }
    return 0;
}