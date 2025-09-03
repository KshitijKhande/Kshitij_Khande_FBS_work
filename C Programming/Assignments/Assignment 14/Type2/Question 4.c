//4. HR (id, name, salary, commission)

#include<stdio.h>
#include<string.h>
typedef struct hr{
	int id;
	char name[20];
	double salary;
	double commission;
}hr;
hr storeHr();
void displayHr(hr);
void main(){
	hr hr1,hr2;
	printf("Enter the details of HR 1:");
	hr1=storeHr();
	printf("\nEnter the details of HR 2:");
	hr2=storeHr();
	
	printf("\nThe details of HR 1 are:");
	displayHr(hr1);
	printf("\nThe details of HR 2 are:");
	displayHr(hr2);
	
}
hr storeHr(){
	hr temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	scanf("%lf",&temp.commission);
	return temp;
}
void displayHr(hr hrd){
	printf("\nId: %d",hrd.id);
	printf("\nName: %s",hrd.name);
	printf("\nSalary: %lf",hrd.salary);
	printf("\nCommission: %lf\n",hrd.commission);
}