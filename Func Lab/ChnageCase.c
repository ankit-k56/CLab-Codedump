#include<stdio.h>
void ChangeCase(char ch){
    int n = ch;
    if(n>=97 && n <=122){
        printf("The capital Value of character is: %c", n-32);
    }
    else if(n>=65 && n <=90){
        printf("The opposite value of character is: %c", n+32);
    }
    else{
        printf("This is not a character");
    }
}
int main(){
    char chr;
    printf("Enter the character: ");
    scanf("%c", &chr);
    ChangeCase(chr);
}