#include<stdio.h>
int main(){
    float x1,x2,y1,y2;
    printf("Enter value of x1 and x2: ");
    scanf("%f %f",&x1, &x2);
    printf("Enter value of y1 and y2: ");
    scanf("%f %f",&y1,&y2);
    printf("The slope is: %f", (y2-y1)/(x2-x1));
    return 0;
}