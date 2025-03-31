// 1. add students dynamically
// 2. expand storage realloc
// 3. free memory properly to avoid leaks
// 4. use dmalloc for debugging
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <alloca.h>
#include <dmalloc.h>

typedef struct {
    char name[50];
    int age;
} Student;

void addStudents(Student **students, int *count) {
    // expand array dynamically
    *students = realloc(*students,(*count+1)*sizeof(Student));
    //*students = calloc((*count+1),sizeof(Student));
    //*students = reallocaray(*students, (*count+1), sizeof(Student));

    if(!*students) {
        printf("memory allocation failed!\n");
        exit(1);
    }

    printf("Enter student name: ");
    scanf("%49s",(*students)[*count].name);
    printf("Enter student age: ");
    scanf("%d",&(*students)[*count].age);
    (*count)++;
}

void displayStudents(Student *students, int count) {
    printf("\nStudent Records:\n");
    for(int i=0; i<count; i++) {
        printf("%d. %s (Age: %d)\n",i+1,students[i].name,students[i].age);
    }
}

    
int main() {
    dmalloc_debug_setup("dmalloc_log.txt");
    int choice,count=0;
    Student* students = NULL; //start with no students
    
    while(1) {
        if(choice==1) {
            addStudents(&students,&count);
        }

        else if(choice==2) {
            displayStudents(students,count);
        }

        else if(choice==3) {
            break;
        }

        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

