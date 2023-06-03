#include <stdio.h>
int main(){
    char name[10];
    char name2[10];
    int i =0;
    int flag = 1;
    printf("jhj: ");
    scanf("%s", &name);
    printf("kkk: ");
    
    scanf("%s", &name2);
    while(name2[i]!= '\0' ){
        if(name2[i]!= name[i]){
            flag = 0;
        }
        i++;
    }
    if(flag){
        printf("Substring");
    } else{
        printf("Not Substring");
    }
    return 0;
}
