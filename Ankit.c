#include<stdio.h>
int main(){
    int a;
    float b;
    char ck;
    // printf("Enter a integer Value: ");
    // scanf("%d", &a);
    // printf("Enter a float Value: ");
    // scanf("%d", &b);
    // printf("Enter a character Value: "); 
    // scanf("%d", &ck);
    printf("Size and Adress of integer value is: %d %d\n", sizeof(a), &a);
    printf("Size and Adress of float value is: %d %d\n", sizeof(b), &b);
    printf("Size and Adress of character value is: %d %d", sizeof(ck), &ck);



    return 0;
}