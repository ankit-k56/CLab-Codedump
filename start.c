#include <stdio.h>

int main(){
    int num1,num2,sum;
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    sum = num1+num2;
    printf("The sum of num1 and num2 is %d", sum);

    return 0;
}