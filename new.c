#include<stdio.h>
int main(){ int length,bredth,radius,sideOfSquare;
    // int a=5,b=7;
    // printf("Using addition operator %d\n", a+b);
    // printf("Using substraction operator %d\n", a-b);
    // printf("Using multiplication operator %d\n", a*b);
    // printf("Using division operator %d\n", a/b);
    // printf("Using percantage(remainder) operator %d\n", a%b);

    
    printf("ENter length and Bredth \n");
    scanf("%d %d", &length,&bredth);
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    printf("Enter side of square: ");
    scanf("%d", &sideOfSquare);
    printf("The area of rectangle is %d\n", length*bredth);
    printf("The area of circle is %d\n", 3.14*radius*radius);
    printf("The area of square is %d", sideOfSquare*sideOfSquare);



    // int num1=2,num2=5, cont;
    // cont = num2;
    // num2 = num1;
    // num1 = cont; 

    // printf("num1 and num2 are as follows %d %d", num1, num2);


    // printf("A\n");
    // printf("A B\n");
    // printf("A B C\n");
    // printf("A B C D");



    // //Write a programe input distance as meter and convert in its corrosponding in Km and cM
    // //Write a programe to convert the temperature from celcius to farenhite
    // //Using prinf statement you display A / A B / A B C / A B C D

    // int distance;
    // printf("Enter distance: ");
    // scanf("%d", &distance);
    // printf("Distance in KM is %f\n" , (float)distance/1000);
    // printf("Distance in CM is %f" , (float)distance*100);

    // float P,R,T;
    // printf("Enter P R T ad follows\n");
    // scanf("%f %f %f", &P,&R,&T);
    // printf("Siple interest is %f", (P*R*T)/100);

    // float temperature;
    // printf("Enter the temperatue in Celcius: ");
    // scanf("%f", &temperature);
    // printf("The temperature in Farenhite is: %f", temperature*9/5+32);

    // printf("My name is Ankit Kumar Roll No. is 22052799 and branch is CSE");

    
    return 0;
}