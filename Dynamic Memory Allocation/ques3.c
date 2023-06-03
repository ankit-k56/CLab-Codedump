#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int largest=0,n;
    printf("Enter th number of integers: ");
    scanf("%d", &n);
    a = (int *)calloc(n,sizeof(int));
    for(int i=0; i< n;i++){
        printf("Enter the number: ");
        scanf("%d", a+i);
        if(*(a+i)>largest){
            largest = *(a+i);
        };
    }
    *(a) = largest;
    printf("The element at 0th index is: %d", a[0]);   
}