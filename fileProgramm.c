#include <stdio.h>
struct ECEAStudent {
    char name[50];
    int rollNumber;
    char gender;
};

int main() {
    struct ECEAStudent student;
    for(int i=0;i<=10;i++){
    printf("Enter student name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter gender (M/F): ");
    scanf(" %c", &student.gender);
    }

    for(int i=0;i<=10;i++){
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Gender: %c\n", student.gender);
    }
    return 0;
}
