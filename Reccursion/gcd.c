#include <stdio.h>
int hcf_recursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return hcf_recursive(b, a % b);
    }
}

int main() {
    int num1, num2, hcf;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    hcf = hcf_recursive(num1, num2);

    printf("The HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
