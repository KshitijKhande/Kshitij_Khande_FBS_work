//1. Student (rollNo, name, marks) using function

#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	int marks;
};
struct student store();
void display(struct student);
void main(){
	struct student s1,s2;
	printf("Enter the details of student 1: ");
	s1=store();
	printf("\nEnter the details of student 2: ");
	s2=store();

	printf("\nThe details of student 1 are:");
	display(s1);
	printf("\nThe details of student 2 are:");
	display(s2);
	
}
struct student store(){
	struct student temp;
	scanf("\n%d",&temp.rollno);
	scanf("\n%s",temp.name);
	scanf("\n%d",&temp.marks);
	return temp;
	
}
void display(struct student s){
	printf("\nRoll No: %d",s.rollno);
	printf("\nName: %s",s.name);
	printf("\nMarks: %d",s.marks);
	
}