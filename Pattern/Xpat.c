#include<stdio.h>
int main(){
    int n;
    printf("Enter half the number of rows: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        for(int j = 0; j<i;j++){
            printf(" ");
        }
        printf("*");
        for(int j = 0; j<n-i;j++){
            printf(" ");
        }
        for(int j = 0; j<n-i;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
    for(int i=1; i<=n;i++){
        for(int j = 0; j<n-i;j++){
            printf(" ");
        }
        printf("*");
        for(int j = 0; j<i;j++){
            printf(" ");
        }
        for(int j = 0; j<i;j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}