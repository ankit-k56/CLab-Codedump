#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int sum=0,n;
    printf("Enter th number of integers: ");
    scanf("%d", &n);
    a = (int *)malloc(n*sizeof(int));
    for(int i=0; i< n;i++){
        printf("Enter the number: ");
        scanf("%d", a+i);
        sum += *(a+i);
    }
    printf("The sum of all the enterd digit is: %d", sum);   
}