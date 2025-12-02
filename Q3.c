#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int marks;
} Student;

int main() {
    int n;
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();  
    Student *students = (Student*) malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i+1);
        fgets(students[i].name, 50, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &students[i].marks);
        getchar(); 
    }

    printf("Students scoring more than 75 marks:\n");
    for(i = 0; i < n; i++) {
        if(students[i].marks > 75)
            printf("%s: %d\n", students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}
