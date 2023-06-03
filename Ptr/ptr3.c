#include<stdio.h>
int larger_sum(int* a,int* b,int n){
    int i,s1=0,s2=0;
    for(i=0;i<n;i++){
        s1+=*(a+i);
        s2+=*(b+i);
    }
    if(s1==s2)
    return 0;
    else if(s1>s2)
    return 1;
    else
    return 2;
}
int main(){
    int x[20],y[15],g;
    x[20]=(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20);
    y[15]=(21,22,23,24,25,26,27,28,29,30,1,2,3,4,5);
    g=larger_sum(x,y,10);
    if(!g)
    printf("both sums are equal\n");
    else if (g==1)
    printf("x is greater than y\n");
    else
    printf("y is gretaer than x");
    return 0;

}