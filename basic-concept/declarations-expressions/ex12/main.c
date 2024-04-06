// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month. 
#include <stdio.h>

int main() {
	char empID[10];
	int hrs;
	float salary;
	printf("Input the Employees ID:\n");
	scanf("%s",&empID);
	printf("Input the working hours:\n");
	scanf("%d",&hrs);
	printf("Salary amount/hr\n");
	scanf("%f",&salary);
	float ttlSalary=hrs*salary;
	printf("Employee ID = %s\n",empID);
	printf("Salary = U$ %.2f\n",ttlSalary);
	return 0;
}
