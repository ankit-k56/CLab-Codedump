#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;};
int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    struct Student students[40];
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks: ");
        scanf("%f", &students[i].marks);}
    printf("\nGrade Details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
        if (students[i].marks >= 90.0) {
            printf("Grade: A\n");
        } else if (students[i].marks >= 80.0) {
            printf("Grade: B\n");
        } else if (students[i].marks >= 70.0) {
            printf("Grade: C\n");
        } else if (students[i].marks >= 60.0) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}
