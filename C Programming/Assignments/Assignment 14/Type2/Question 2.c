//2. Employee (id, name, salary) with function

#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[20];
	double salary;
};
struct employee storeEmployee();
void displayEmployee(struct employee);
void main(){
	struct employee e1,e2;
	printf("The details of employee 1 are:");
	e1=storeEmployee();
	printf("\nEnter the details of Employee 2:");
	e2=storeEmployee();
	printf("\nThe details of employee 1 are:");
	displayEmployee(e1);
	printf("\nThe details of employee 2 are:");
	displayEmployee(e2);
	
}
struct employee storeEmployee(){
	struct employee temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	return temp;
}
void displayEmployee(struct employee emp){
	printf("\nId: %d",emp.id);
	printf("\nName: %s",emp.name);
	printf("\nSalary: %lf",emp.salary);
	
}