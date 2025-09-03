//3. Admin (id, name, salary, allowance)

#include<stdio.h>
#include<string.h>
typedef struct admin{
	int id;
	char name[20];
	double salary;
	double allowance;
}admin;
admin storeAdmin(admin*,int);
void displayAdmin(admin*,int);
void main(){
	admin ad[3];
	storeAdmin(ad,3);
	displayAdmin(ad,3);
}
admin storeAdmin(admin* ad,int size){
	for(int i=0;i<size;i++){
		printf("Enter the details of Admin %d:",i+1);
		scanf("%d",&ad[i].id);
		scanf("%s",ad[i].name);
		scanf("%lf",&ad[i].salary);
		scanf("%lf",&ad[i].allowance);
	}
}
void displayAdmin(admin* ad,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of Admin %d are:",i+1);
		printf("\nId: %d",ad[i].id);
		printf("\nName: %s",ad[i].name);
		printf("\nSalary: %lf",ad[i].salary);
		printf("\nAllowance: %lf\n",ad[i].allowance);
	}
	
}