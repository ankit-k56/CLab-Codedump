#include<stdio.h>
float ChangetoFarenheit(float a){
    float F = a * 9/5.0 + 32;
    return F;
}

int main(){
    float celcius;
    printf("Enter the celcius: ");
    scanf("%f", &celcius);
    float ck = ChangetoFarenheit(celcius);
    printf("The corresponding value of celcius in Fahrenheit is: %f F", ck);
    return 0;
}