#include<stdio.h>
int main(){
    int marks ,age;
    printf("Enter the age and marks: ");
    scanf("%d%d", &age, &marks);
    marks+=40;
    if(age>50){
        marks+=20;
    }
    if(marks >= 100){
        printf("Marks is greater than 100");
        return 0;
    }
    printf("After adding grace marks the total marks is eqaul to: %d", marks);

    return 0;
}