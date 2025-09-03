//4. HR (id, name, salary, commission)

#include<stdio.h>
#include<string.h>
typedef struct hr{
	int id;
	char name[20];
	double salary;
	double commission;
}hr;
hr storeHr(hr*,int);
void displayHr(hr*,int);
void main(){
	hr hrd[3];
	storeHr(hrd,3);
	displayHr(hrd,3);
	
}
hr storeHr(hr *hrd,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter the details of HR %d:",i+1);
		scanf("%d",&hrd[i].id);
		scanf("%s",hrd[i].name);
		scanf("%lf",&hrd[i].salary);
		scanf("%lf",&hrd[i].commission);
	}

}
void displayHr(hr *hrd,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of HR %d are:",i+1);
		printf("\nId: %d",hrd[i].id);
		printf("\nName: %s",hrd[i].name);
		printf("\nSalary: %lf",hrd[i].salary);
		printf("\nCommission: %lf\n",hrd[i].commission);
	}
}