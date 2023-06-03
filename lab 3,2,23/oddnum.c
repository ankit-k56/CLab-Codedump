#include<stdio.h>
int main(){
    int count=0,sum=0,i=0, num;
    for(i;i<10;i++){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num%2){
            count++;
            sum+=num;
        }
    }
    printf("The number of odd numbers are: %d\n", count);
    printf("The sum of odd numbers are: %d", sum);
    return 0;
}