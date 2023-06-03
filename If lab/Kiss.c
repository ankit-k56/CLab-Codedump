#include<stdio.h>
int main(){
    int class;
    printf("Enter the class: ");
    scanf("%d", &class);
    if(class<=12 && class>=0){
        printf("You are in KISS");
    }
    else{
        printf("You are in KIIT");
    }
    
    return 0;
}