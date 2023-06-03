#include<stdio.h>
int main(){
    int a,frst,snd,trd;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    frst = a/100;
    a = a%100;
    snd= a/10;
    a= a%10;
    trd = a;
    printf("First element is: %d\n", frst);
    printf("Second element is: %d\n", snd);
    printf("Third element is: %d", trd);

    return 0;
    
} 