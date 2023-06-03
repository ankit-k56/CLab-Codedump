#include<stdio.h>
int main(){
    char i=0,src[100],frq;
    int count=0;
    printf("Enter the character whose frequency you want to find: ");
    scanf("%c", &frq);
    printf("enter the src string: ");
    scanf("%s", &src);
    
    while(src[i]!='\0'){
        if(src[i] == frq){
            count++;
        }
        i++;     
    }
    printf("Length of the %c in : %d",count);
}