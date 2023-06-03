#include <stdio.h> 
int main(){
    float a,p;
    printf("Enter a Value: ");
    scanf("%f", &a);
    p = ++a + a++ + --a;


    printf("%f", p);
    return 0;
}