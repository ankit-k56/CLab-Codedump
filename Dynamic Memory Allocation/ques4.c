#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a ;
    int oldCount=0, newCount=0,pos=0,n;
    printf("Enter th number of integers: ");
    scanf("%d", &n);
    a = (int *)calloc(n,sizeof(int));
    for(int i=0; i< n;i++){
        printf("Enter the number: ");
        scanf("%d", a+i);
    }
    for(int i=0; i< n;i++){
        if (a[i] == 1) {
            newCount++;
            if (newCount > oldCount) {
                oldCount = newCount;
                pos = i - oldCount + 1;
            }
        } else {
            newCount = 0;
        }           
    }
    printf("The element at 0th index is: %d", pos);   
    return 0;
}