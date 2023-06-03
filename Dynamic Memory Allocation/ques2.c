#include<stdio.h>
#include<stdlib.h>
int main(){
    int (*a)[5];
    int sum=0,n;
    printf("Enter th number of rows: ");
    scanf("%d", &n);
    a = (int(*)[5])malloc(5*n*sizeof(int));
    for(int i=0; i< n;i++){
        for(int j =0; j<5;j++){
            printf("Enter the value of a[%d][%d]: ", i,j);
            scanf("%d", ((*a+j)+i));
            sum += *((*a+j)+i);
        }
    }
    printf("The sum of all the enterd digit is: %d", sum);   
}