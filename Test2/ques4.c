#include<stdio.h>
struct student {
    char name[50];
    int age;
    float marks;
};
void displayStudentDetails( struct student *s) {
    printf("Name: %s\n", s->name);
    printf("Age: %d\n", s->age);
    printf("Marks: %.2f\n", s->marks);
}
int main() {
    struct student student1, student2;
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Marks: ");
    scanf("%f", &student1.marks);
    printf("Enter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Marks: ");
    scanf("%f", &student2.marks);
    printf("\nStudent 1 Details:\n");
    displayStudentDetails(&student1);
    printf("\nStudent 2 Details:\n");
    displayStudentDetails(&student2);
    return 0;
}