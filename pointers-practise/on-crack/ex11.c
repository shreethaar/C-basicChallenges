// pointer arithmetic with structures

typedef struct {
    int id;
    char name[50];
    double salary;
} Employee;

Employee staff[10];
Employee *emp_ptr = staff // points to first employee

// move to next employee
emp_ptr++;

// access third employee's data 
(emp_ptr+2)->id=1003;
(emp_ptr+2)->salary=75000.0;

// alternative syntax
staff[2].id=1003; /// same effect as above
