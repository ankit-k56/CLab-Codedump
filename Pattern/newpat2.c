#include<stdio.h>
int main(){
    int n, num=1;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int j=i; j<=(n/2)+i; ){
            printf("%d",j++);
        }
        printf("\n");
    }
    return 0;
}