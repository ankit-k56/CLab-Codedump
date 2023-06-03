#include<stdio.h>
int main(){
    int n, num=1;
    printf("hjhbh: ");
    scanf("%d", &n);
    for(int i=1;  i<=n; i++){
        for(int j =0; j<n-i;j++){
            printf(" ");
        }
        for(int j =0; j<i; j++ ){
            printf("%d", num++);
        }
        for(int j =0; j<i-1; j++ ){
            printf("%d", num++);
        }
        printf("\n");
    }
}