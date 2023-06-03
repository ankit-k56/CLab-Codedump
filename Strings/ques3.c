#include<stdio.h>
int main(){
    char i=0,src[100];
    int j=0;
    int size=0;
    printf("enter the src string: ");
    scanf("%s", &src);
    while(src[i]!='\0'){
        i++;     
    }
    printf("Length of the string is: %d",i);
}