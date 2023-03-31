#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int marks[4];
    float average;
};

int main() {
    struct Student student1;
    printf("Enter student's roll no: ");
    scanf("%d", &student1.roll_no);
    printf("Enter student's name: ");
    scanf("%s", &student1.name);
    printf("Enter student's marks for test 1: ");
    scanf("%d", &student1.marks[0]);
    printf("Enter student's marks for test 2: ");
    scanf("%d", &student1.marks[1]);
    printf("Enter student's marks for test 3: ");
    scanf("%d", &student1.marks[2]);
    printf("Enter student's marks for test 4: ");
    scanf("%d", &student1.marks[3]);

    student1.average = (float)(student1.marks[0] + student1.marks[1] + student1.marks[2] + student1.marks[3]) / 4;

    printf("Roll No.: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("Marks for Test 1: %d\n", student1.marks[0]);
    printf("Marks for Test 2: %d\n", student1.marks[1]);
    printf("Marks for Test 3: %d\n", student1.marks[2]);
    printf("Marks for Test 4: %d\n", student1.marks[3]);
    printf("Average: %.2f\n", student1.average);

    return 0;
}
