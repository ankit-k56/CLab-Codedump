#include<stdio.h>
int main(){
    int n;
    char c= 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(int i=1;i<=n; i++){
        for(int j=1; j<=i; j++){
            
            printf("%c", c);
            
        }
        if(i==n){
                printf("%c", c);
            }
        c++;
        printf("\n");
    }
    c--;
    for(int i =n; i>0;i--){
        if(i==n){
                printf("%c", c);
            }
        for(int j =i;j>0;j--){
            printf("%c", c);
        }
        c--;
        printf("\n");
    }
    return 0;
}