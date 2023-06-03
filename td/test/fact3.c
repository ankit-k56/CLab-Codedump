#include <stdio.h>

int main() {
    int n,sum=0,fact=1;
    printf("bhjbhjbjh: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++){
        
        fact = fact *i;
        sum+=fact;
    }
    printf("The sum of fact till n is: %d", sum);

}




