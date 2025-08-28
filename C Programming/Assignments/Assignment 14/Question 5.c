//5. SalesManager (id, name, salary, incentive, target)

#include<stdio.h>
#include<string.h>
struct smanager{
	int id;
	char name[20];
	double salary;
	double incentive;
	double target;
};
void main(){
	struct smanager sm1,sm2;
	sm1.id=101;
	strcpy(sm1.name,"Kshitij");
	sm1.salary=29000;
	sm1.incentive=5000;
	sm1.target=500000;
	printf("The details of Sales Manager 1 are:");
	printf("\n%d",sm1.id);
	printf("\n%s",sm1.name);
	printf("\n%lf",sm1.salary);
	printf("\n%lf",sm1.incentive);
	printf("\n%lf\n",sm1.target);

	printf("\nEnter the details of Sales Manager 2:");
	scanf("%d",&sm2.id);
	scanf("%s",sm2.name);
	scanf("%lf",&sm2.salary);
	scanf("%lf",&sm2.incentive);
	scanf("%lf",&sm2.target);
	printf("\nThe details of HR 2 are:");
	printf("\n%d\n%s\n%lf\n%lf\n",sm2.id,sm2.name,sm2.salary,sm2.incentive,sm2.target);
	
}