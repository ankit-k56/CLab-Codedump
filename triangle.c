#include<stdio.h>
#include<Math.h>
int main(){
    float a,b,c;
    printf("enter the value of a b and c: ");
    scanf("%f %f %f" , &a,&b,&c);
    int t =(a==sqrt(b*b+c*c));
    t =(b==sqrt(a*a+c*c));
    t =(c==sqrt(b*b+a*a));
    printf("%d", t);

    return 0;
}