#include<stdio.h>
// int main(){
//     int arr[10] ={1,2,3,4,5,6,7,8,9,1};
//     int *i, *j;
//     i =arr+9;
//     j = arr;
//     printf("%d", i);
//     printf("\n%d\n", j);
//     for(int j = 0 ; j<10;j++){
//         *(i-j) = *(i-j)+ *(i-j-1);
//         // i--;

//     }
//         // arr[i] = arr[i] + arr[i-1];
//     for(int k = 0; k<10; k++){
//     printf(" %d ", arr[k]);
//     }
// }
int main(){
    char s[10], s2[10];
    char *ptr;
    int i =0;
    ptr= s;
    scanf("%s", ptr);
    while(*ptr != '\0'){
        s2[i]= *ptr;
        ptr++;
        i++;
    }
    s2[i]='\0';
    printf("%s", *(ptr-1));
}