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
smanager storeManager(smanager*,int);
void displayManager(smanager*,int);
void main(){
	smanager sm[3];
	storeManager(sm,3);
	displayManager(sm,3);
}
smanager storeManager(smanager* sm,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter the details of Sales Manager %d:",i+1);
		scanf("%d",&sm[i].id);
		scanf("%s",sm[i].name);
		scanf("%lf",&sm[i].salary);
		scanf("%lf",&sm[i].incentive);
		scanf("%lf",&sm[i].target);
	}
}
void displayManager(smanager* sm,int size){
for(int i=0;i<size;i++){
		printf("\nThe details of HR %d are:",i+1);
		printf("\nId: %d",sm[i].id);
		printf("\nName: %s",sm[i].name);
		printf("\nSalary: %lf",sm[i].salary);
		printf("\nIncentive: %lf",sm[i].incentive);
		printf("\nTarget: %lf\n",sm[i].target);
}
}