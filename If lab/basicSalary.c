#include<stdio.h>
int main(){
    float salary ,HRA , DA;
    printf("Enter base slary: ");
    scanf("%f",&salary);
    if(salary<=1500){
        HRA = (10.0/100.0)*salary; 
        DA = (40.0/100.0)*salary;
        salary = salary + HRA + DA;
        printf("The gross salary is: %f", salary);
    }
    else if(salary>1500){
        HRA = 500; 
        DA = (50.0/100.0)*salary;
        salary = salary + HRA + DA;
        printf("The gross salary is: %f", salary);
    }
    return 0;
}