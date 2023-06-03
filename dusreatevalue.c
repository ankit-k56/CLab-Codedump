#include<stdio.h>
int main(){
    float a, b,c;
    printf("Enter a, b, c value acoordingly: ");
    scanf("%f %f %f", &a,&b,&c);
    printf("The discrete value of Quadratic equation is: %f", (b*b)-(4*a*c));
    return 0;
}