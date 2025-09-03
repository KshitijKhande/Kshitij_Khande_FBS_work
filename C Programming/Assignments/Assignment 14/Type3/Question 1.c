//1. Student (rollNo, name, marks) using function

#include<stdio.h>
#include<string.h>
typedef struct student{
	int rollno;
	char name[20];
	int marks;
}student;
void store(student*,int);
void display(student*,int);
void main(){
	student stud[3];
	store(stud,3);
	display(stud,3);
	
}
void store(student *s,int size){
	for(int i=0;i<size;i++){
		printf("Enter the details of student %d: ",i+1);
		scanf("%d",&s[i].rollno);
		scanf("%s",s[i].name);
		scanf("%d",&s[i].marks);
	}	
}
void display(student *s,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of student %d are:",i+1);
		printf("\nRoll No: %d",s[i].rollno);
		printf("\nName: %s",s[i].name);
		printf("\nMarks: %d",s[i].marks);
	}
}