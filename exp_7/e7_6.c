/*Create a union employee <emp_id, salary>. Read and write the employee 
details and demonstrate the significance of union’s space management. */

#include <stdio.h>
union employee {
	char name[10];
	int empid;
	float empsalary;
} e;

void main() {
	printf("Enter employee id: ");
	scanf("%d", &e.empid);
	// Switch to empsalary member
	printf("Enter employee salary: ");
	scanf("%f", &e.empsalary);
	printf("\nEmployee id: %d", e.empid);
	printf("\nEmployee salary: %.2f", e.empsalary);
	printf("\nSize of union: %lu", sizeof(union employee));
	printf("\nSize of empid: %lu", sizeof(e.empid));
	printf("\nSize of empsalary: %lu", sizeof(e.empsalary));
}