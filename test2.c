#include <stdio.h>
typedef struct student {
	char name[10];
	int rollno;
	char gender;
	int marks[5];
	float gpa;
	char grades[5];
} stud;

stud calculate_grades(stud s);

int main(void) {
	int n, i, j;

	printf("Enter Number of students:");
	scanf("%d", &n);


	stud students[n];

	printf("\nSTUDENTS DETAIL\n");

	for (i = 0; i < n; i++) {
		printf("STUDENT_%d:\n", i + 1);

		printf("Name:\n");
		scanf("%s", students[i].name);

		printf("Roll Number:\n");
		scanf("%d", &students[i].rollno);

		printf("Gender(M/F):\n");
		scanf(" %c", &students[i].gender);

		printf("\n\tMarks\n");

		int sum = 0;
		for (j = 0; j < 5; j++) {
			printf("SUBJECT _%d:\n", j + 1);
			scanf("%d", &students[i].marks[j]);
			sum += students[i].marks[j];
		}

		float average = (float)sum /5.0;
		students[i].gpa = average;

		students[i] = calculate_grades(students[i]);
	}

	printf("\nSTUDENT DETAILS, GPA, and GRADES\n");
	for (i = 0; i < n; i++) {
		printf("\n");
		printf("STUDENT_%d\n", i + 1);
		printf("Name: %s\n", students[i].name);
		printf("Roll Number: %d\n", students[i].rollno);
		printf("Gender: %c\n", students[i].gender);
		printf("GPA: %.2f\n", students[i].gpa);

		printf("Grades: ");
		for (j = 0; j < 5; j++) {
			printf("%c ", students[i].grades[j]);
		}
		printf("\n");
	}

	return 0;
}

stud calculate_grades(stud s) {
	for (int i = 0; i < 5; i++) {
		if (s.marks[i] >= 90 && s.marks[i] <= 100)
			s.grades[i] = 'A';
		else if (s.marks[i] >= 80 && s.marks[i] < 90)
			s.grades[i] = 'B';
		else if (s.marks[i] >= 70 && s.marks[i] < 80)
			s.grades[i] = 'C';
		else if (s.marks[i] >= 60 && s.marks[i] < 70)
			s.grades[i] = 'D';
		else
			s.grades[i] = 'F';
	}
	return s;
}