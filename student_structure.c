#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Roll: %d, Marks: %d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    printf("\nStudents scoring below 20 marks:\n");
    for (int i = 0; i < n; i++) {
        if (s[i].marks < 20) {
            printf("%s\n", s[i].name);
        }
    }

    return 0;
}