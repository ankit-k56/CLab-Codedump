#include<stdio.h>
float ChangetoKg(int a){
    float Kg = a/1000.0;
    return Kg;
}

int main(){
    int gram;
    printf("Enter the gram: ");
    scanf("%d", &gram);
    float ck = ChangetoKg(gram);
    printf("The corresponding value of gram in Kg is: %f Kg", ck);
    return 0;
}