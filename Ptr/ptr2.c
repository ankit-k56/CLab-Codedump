#include<stdio.h>
int main(){
    int *ptr1, *ptr2, num1=5, num2=10,temp;
    ptr1= &num1;
    ptr2 = &num2;
    temp = *ptr1;
    *ptr1 = num2;
    *ptr2 = temp;
    printf("The value of Num1 and Num2 after swapping are: %d and %d", *ptr1, *ptr2);
    }
//Find all even number in an existing array using pointer and store them in an array
