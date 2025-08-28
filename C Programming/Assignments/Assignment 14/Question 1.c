//1. Student (rollNo, name, marks)

#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	int marks;
};
void main(){
	struct student s1,s2;
	s1.rollno=10;
	strcpy(s1.name,"Kshitij");
	s1.marks=75;
	printf("The details of student 1 are:");
	printf("\n%d",s1.rollno);
	printf("\n%s",s1.name);
	printf("\n%d\n",s1.marks);
	
	printf("\nEnter the details of student 2: ");
	scanf("\n%d",&s2.rollno);
	scanf("\n%s",&s2.name);
	scanf("\n%d",&s2.marks);
	printf("\nThe details of student 2 are:");
	printf("\n%d\n%s\n%d",s2.rollno,s2.name,s2.marks);
}