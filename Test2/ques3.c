#include<stdio.h>
struct complex{
    float real;
    float imag;
};
struct complex addComplex(struct complex num1, struct complex num2);

int main() {
    struct complex num1,num2,sum1;
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum1=addComplex(num1, num2);

    printf("Sum = %.2f + %.2fi\n", sum1.real, sum1.imag);

    return 0;
}
struct complex addComplex(struct complex num1, struct complex num2) {
    struct complex sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;}