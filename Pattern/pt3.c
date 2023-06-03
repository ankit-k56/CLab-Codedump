#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i =1; i<=n;i++){
        for(int j =1;j<=2*n-2*i-1;j++){
            printf("A");
        }
        for(int j =1; j<=2*i-1;j++){
            printf(" ");
        }
        for(int j =1; j<=2*n-2*i-1;j++){
            printf("A");
        }
        for(int j =1;j<=2*i-1;j++){
            printf(" ");
        }
        for(int j =1;j<=2*n-2*i-1;j++){
            printf("A");
        }
        printf("\n");
    }
    return 0;
}