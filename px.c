#include<stdio.h>
#define p(x) (2*x*x -5*x +1) 
int main(){
    int a,b;
    a=p(2);
    b=p(3);

    printf("The value of p(2)*p(3) is: %d\n", a*b);

    return 0;
}