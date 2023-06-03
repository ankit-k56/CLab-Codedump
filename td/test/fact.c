#include <stdio.h>

int main() {
    int n,sum=0,fact;
    printf("bhjbhjbjh: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        fact=1;
        for(int j =1; j<=i;j++){
            fact = fact*j;
        }
        sum+=fact;
    }
    printf("The sum of fact till n is: %d", sum);

}

