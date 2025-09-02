//2. Employee (id, name, salary)

#include<stdio.h>
#include<string.h>
struct employee{
	int id;
	char name[20];
	double salary;
};
void main(){
	struct employee e1,e2;
	e1.id=101;
	strcpy(e1.name,"Kshitij");
	e1.salary=29000;
	printf("The details of employee 1 are:");
	printf("\n%d",e1.id);
	printf("\n%s",e1.name);
	printf("\n%lf\n",e1.salary);

	printf("\nEnter the details of Employee 2:");
	scanf("%d",&e2.id);
	scanf("%s",e2.name);
	scanf("%lf",&e2.salary);
	printf("\nThe details of employee 2 are:");
	printf("\n%d\n%s\n%lf\n",e2.id,e2.name,e2.salary);
	
}