#include<stdio.h>
// long long int fact(int a){
//     if(a==1){
//         return 1;
//     }
//     else{
//         return a*fact(a-1);
//     }
// }
// int main(){
//     int k;
//     scanf("%d",&k);
//     printf("%lld",fact(k));


// }

struct k {
    char name[20];
    int age;
    char address[20];
    int phone;
};
int main(){
    
    struct k s= {"jhjhj", 10,"hjjh",10};
    struct k* j = &s;
    printf("%d", j->age);

    

    
}