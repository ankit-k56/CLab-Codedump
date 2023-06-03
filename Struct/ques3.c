#include<stdio.h>
struct employee{
    char name[20];
    char address[20];
    int age;
    float salary;
};
struct employee employeeArr[10];


int main(){
    float avg=0;
    for(int i=0; i<3;i++){
        printf("\nEnter name, adress, age, salary of the employee: ");
        scanf("%s%s%d%f", &employeeArr[i].name,&employeeArr[i].address,&employeeArr[i].age,&employeeArr[i].salary);
        avg += employeeArr[i].salary;
    }
    
    for(int i=0; i<3;i++){
        printf("\nThe  name: %s, adress:%s , age:%d , salary:%f of the employee is as follows", employeeArr[i].name,employeeArr[i].address, employeeArr[i].age, employeeArr[i].salary);
    } 
    avg = avg/3.0;
    for(int i=0; i<3;i++){
        if((float)employeeArr[i].salary >= avg){
            printf("\nThe name of emplyee whose salary is greater than average salary are: %s", employeeArr[i].name);
        }
    }    
    printf("\nThe Average salary of employees is: %f", avg);    
    return 0;
}