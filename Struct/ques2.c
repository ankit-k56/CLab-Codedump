#include<stdio.h>
#include<string.h>
struct employee
{
    char name[10];
    int age;
    float salary;
};
int main(){
    struct employee e1={"vikas",30,55.50};
    struct employee e2={"gowthami",32,45.77};
    struct employee e3={"tanusha",40,49.77};
    e2.age=e1.age;
    e2.salary=e1.salary;
    e3=e1;
    strcpy(e2.name,e1.name);
    printf("the age of sec employee is %d and the salary of first employee is %f",e2.age,e2.salary);
    return 0;
    
    
    
}