//2. Employee (id, name, salary) with function

#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id;
	char name[20];
	double salary;
}employee;
employee storeEmployee(employee*,int);
void displayEmployee(employee*,int);
void main(){
	employee e[3];
	storeEmployee(e,3);
	displayEmployee(e,3);
	
}
employee storeEmployee(employee* e,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter the details of Employee %d:",i+1);
		scanf("%d",&e[i].id);
		scanf("%s",e[i].name);
		scanf("%lf",&e[i].salary);
	}
}
void displayEmployee(employee* e,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of employee %d are:",i+1);
		printf("\nId: %d",e[i].id);
		printf("\nName: %s",e[i].name);
		printf("\nSalary: %lf",e[i].salary);
	
	}
}