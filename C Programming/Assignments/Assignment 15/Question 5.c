//5. SalesManager (id, name, salary, incentive, target)

#include<stdio.h>
#include<string.h>
typedef struct smanager{
	int id;
	char name[20];
	double salary;
	double incentive;
	double target;
}smanager;
smanager storeManager();
void displayManager(smanager);
void main(){
	smanager sm1,sm2;
	printf("Enter the details of Sales Manager 1:");
	sm1=storeManager();
	printf("\nEnter the details of Sales Manager 1:");
	sm2=storeManager();
	
	printf("\nThe details of HR 1 are:");
	displayManager(sm1);
	printf("\nThe details of HR 2 are:");
	displayManager(sm2);
}
smanager storeManager(){
	smanager temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	scanf("%lf",&temp.incentive);
	scanf("%lf",&temp.target);
	return temp;
}
void displayManager(smanager sm){
	printf("\nId: %d",sm.id);
	printf("\nName: %s",sm.name);
	printf("\nSalary: %lf",sm.salary);
	printf("\nIncentive: %lf",sm.incentive);
	printf("\nTarget%lf\n",sm.target);
}