#include<stdio.h>
#include<Math.h>
int main(){
    float l;
    printf("enter the value L: ");
    scanf("%f", &l);
    float T = 2* 3.14 * sqrt(l/9.8);
    printf("The time period of pendulam is: %f",T);
    return 0;
}
