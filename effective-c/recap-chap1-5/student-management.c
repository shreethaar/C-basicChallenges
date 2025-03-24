/* Student Management System 
 * Safely store and manage student information
 * Support store and manage student information
 * Implement secure input handling
 * Generate unique student IDs
 * Perform various student record operations
 */

#include <complex.h>
#include <signal.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <ctype.h>
#include <sys/types.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5

// student structure 
typedef struct {
    uint32_t stuent_id;
    char name[MAX_NAME_LENGTH];
    uint8_t age;
    float grades[MAX_SUBJECTS];
    uint8_t grade_count;
    bool is_enrolled;
} Student;

Student student_database[MAX_SUBJECTS];
size_t student_count = 0;

void trim_whitespace(char* str) {
    char* start=str;
    char* end=str+strlen(str)-1;
    while(isspace(*start)) start++;
    while(end>start && isspace(*end)) end--;
    *(end+1)='\0';
    if(start!=str) {
        memmove(str,start,end-start+2);
    }
}

uint32_t generate_unique_student_id(const Student* database, size_t count) {
    uint32_t base_id=1000;
    bool id_exists;

    while(1) {
        id_exits=false;
        for(size_t i=0;i<count;i++) {
            if(database[i].student_id==base_id) {
                base_id=(base_id<<1)^0x1021;
                id_exists=true;
                break;
                }
        }
        if(!id_exists) {
            return base_id;
        }
    }
}

int add_student() {
    if(student_count>=MAX_STUDENTS) {
        printf("Error: Student database is full\n");
        return -1;

    }

    Student new_student;
    char input_buffer[MAX_NAME_LENGTH];
    printf("Enter student name: ");
    if(fgets(input_buffer,sizeof(input_buffer),stdin)==NULL) {
        printf("Input error\n");
        return -1;
    }

    trim_whitespace(input_buffer);
    strncpy(new_student.name,input_buffer,MAX_NAME_LENGTH-1);
    new_student.name[MAX_NAME_LENGTH-1]='\0';
    printf("Enter student age: ");
    if (scanf("%hhu", &new_student.age) != 1) {
        printf("Invalid age input\n");
        while (getchar() != '\n');  // Clear input buffer
        return -1;
    }
    while (getchar() != '\n');
    printf("How many subjects? (1-5): ");
    if (scanf("%hhu", &new_student.grade_count) != 1 || 
        new_student.grade_count < 1 || new_student.grade_count > MAX_SUBJECTS) {
        printf("Invalid number of subjects\n");
        while (getchar() != '\n');
        return -1;
    }
    while (getchar() != '\n');

    // Input grades
    for (uint8_t i = 0; i < new_student.grade_count; i++) {
        printf("Enter grade for subject %d: ", i + 1);
        if (scanf("%f", &new_student.grades[i]) != 1) {
            printf("Invalid grade input\n");
            while (getchar() != '\n');
            return -1;
        }
        while (getchar() != '\n');
    }

    // Enrollment status
    char enrollment_choice;
    printf("Is student enrolled? (y/n): ");
    if (scanf(" %c", &enrollment_choice) != 1) {
        printf("Invalid input\n");
        while (getchar() != '\n');
        return -1;
    }
    new_student.is_enrolled = (enrollment_choice == 'y' || enrollment_choice == 'Y');
    while (getchar() != '\n');

    // Generate unique ID
    new_student.student_id = generate_unique_student_id(student_database, student_count);

    // Validate student data
    if (!validate_student_input(&new_student)) {
        printf("Student data validation failed\n");
        return -1;
    }

    // Add to database
    student_database[student_count++] = new_student;
    printf("Student added successfully. Student ID: %u\n", new_student.student_id);
    return 0;
}

void display_student_info(const Student* student) {
    printf("Student ID: %u\n", student->student_id);
    printf("Name: %s\n", student->name);
    printf("Age: %hhu\n", student->age);
    printf("Enrollment Status: %s\n", student->is_enrolled ? "Enrolled" : "Not Enrolled");
    
    printf("Grades:\n");
    float total_grade = 0.0f;
    for (uint8_t i = 0; i < student->grade_count; i++) {
        printf("  Subject %d: %.2f\n", i + 1, student->grades[i]);
        total_grade += student->grades[i];
    }

    if (student->grade_count > 0) {
        printf("Average Grade: %.2f\n", total_grade / student->grade_count);
    }
}

void search_student() {
    uint32_t search_id;
    printf("Enter student ID to search: ");
    if (scanf("%u", &search_id) != 1) {
        printf("Invalid input\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');

    for (size_t i = 0; i < student_count; i++) {
        if (student_database[i].student_id == search_id) {
            display_student_info(&student_database[i]);
            return;
        }
    }
    printf("Student with ID %u not found\n", search_id);
}

void display_menu() {
    printf("\n----Student Management System---\n");
    printf("1. Add new student\n");
    printf("2. Search student\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    while(1) {
        display_menu();
        if(scanf("%d",&choice)!=1) {
            printf("Invalid input\n");
            while(getchar()!='\n');
            continue;
        }
        while(getchar()!='\n');
        switch(choice) {
            case 1:
                add_student();
                break;
            case 2:
                search_student();
                break;
            case 3:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

