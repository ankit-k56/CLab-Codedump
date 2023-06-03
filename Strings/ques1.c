#include<stdio.h>
int main(){
    char i=0,src[100],dst[100];
    printf("enter the src string: ");
    scanf("%s", &src);
    while(src[i]!='\0'){
        dst[i++]= src[i];       
    }
    dst[i]= '\0';
    printf("New string after copying: %s",dst);
}