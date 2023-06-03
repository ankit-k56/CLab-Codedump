#include<stdio.h>
#include<string.h>
void rev(char *s,int c, char *s2){
    for(int i=c; i>=0; i--){
        *(s+i) = *(s2);
        s2++;
        
    }
}
int main(){
    char s[20], s2[20];
    // s = "KIIT UNIVERSITY";
    printf("jjj: ");
    scanf("%s", s);
    int i=0;
    while(s[i]!='\0'){
        if(s[i]==' '){
            rev(s, i, s2);
        }
        i++;

    }
    printf("%s", s2);

}   
