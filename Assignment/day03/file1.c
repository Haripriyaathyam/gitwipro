/* write a program to table the Student details */

#include <stdio.h>
int main()
{
	int Rollno;
	char Name[20];
	char Gender[2];
	int Phoneno;
	char Address[20];
	float mark1, mark2;
    int Average 
	
	printf("\nEnter student details");
	
	printf("\nEnter Roll number ");
	scanf("%d",&Rollno);

	printf("\nEnter the Name of student: ");
	scanf("%s",&Name);

	printf("\nEnter the Gender: ");
	scanf("%s",&Gender);

	printf("\nEnter Phone number :");
	scanf("%d",&Phoneno);

	printf("\nEnter the Address :");
	scanf("%s",&Address);

	printf("\nEnter Marks1 :");
	scanf("%f",&mark1);
	printf("\nEnter Marks2 :");
	scanf("%f",&mark2);

    printf("\nEnter Average :");
	scanf("%d",&Average);
	

	printf("\nDetails of Students are :");

	printf("\nRoll Number - %d", Rollno);
	printf("\nName - %s", Name);
	printf("\nGender - %s", Gender);
	printf("\nPhone Number - %d", Phoneno);
	printf("\nAddress - %s", Address);
	printf("\nMarks in 1st Subject - %2f", mark1);
	printf("\nMarks in 2nd Subject - %2f", mark2);
    printf("\nAverage - %d", Average);
	return 0;

}

