#include<stdio.h>
int main(){
    char i=0,src[100],dst[100];
    int j=0;
    int size=0;
    printf("enter the src string: ");
    scanf("%s", &src);
    while(src[i]!='\0'){
        i++;     
    }
    dst[i--] = '\0';
    while(i>=0){
        dst[j++] =src[i];
        i--;
    }
    printf("New strinf after copying: %s",dst);
}