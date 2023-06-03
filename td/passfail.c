#include<stdio.h>
int main(){
    int phy, chm, mht, eng, bio;
    printf("enter the Marks of Physics, Chemistry , Maths, English, Biology accordingly: ");
    scanf("%d %d %d %d %d", &phy, &chm, &mht , &eng, &bio);
    int avg = ((phy+chm+mht+eng+bio)/5.0)+0.9;
    if(avg>=60){
        printf("First division");
    }
    else if(avg>=50){
        printf("Second divison");
    }
    else if(avg>=40){
        printf("Third Divison");
    }
    else{
        printf("Fail");
    }
    return 0;

}