#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("%d",i);
        }
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++){
            printf("%d",i);
        }
        printf("\n");
    }
    for(int i =1; i<n;i++){
        for(int j =1;j<=i;j++){
            printf(" ");
        }
        for(int j =1; j<=2*n-2*i-1;j++){
            printf("%d", n-i);
        }
        for(int j =1; j<=i;j++){
            printf(" ");
        }
        for(int j =1;j<=i;j++){
            printf(" ");
        }
        for(int j =1;j<=2*n-2*i-1;j++){
            printf("%d", n-i);
        }
        printf("\n");
    }
    return 0;
}