#include <stdio.h>

int main() {
    int n, a, k= 1;
    printf("Enter the factorial: ");
    scanf("%d",&n);

    for (a=1; a<= n; a++) {
        k *= a;
        if (k==n)
        {
            printf("The number from the factorial %d\n",a);
        }
    }   
    return 0;
}

