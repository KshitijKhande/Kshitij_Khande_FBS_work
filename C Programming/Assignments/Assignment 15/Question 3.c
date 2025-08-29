//3. Admin (id, name, salary, allowance)

#include<stdio.h>
#include<string.h>
struct admin{
	int id;
	char name[20];
	double salary;
	double allowance;
};
struct admin storeAdmin();
void displayAdmin(struct admin);
void main(){
	struct admin ad1,ad2;
	printf("Enter the details of Admin 1:");
	ad1=storeAdmin();
	printf("\nEnter the details of Admin 2:");
	ad2=storeAdmin();
	
	printf("The details of Admin 1 are:");
	displayAdmin(ad1);
	printf("\nThe details of Admin 2 are:");
	displayAdmin(ad2);
	
}
struct admin storeAdmin(){
	struct admin temp;
	scanf("%d",&temp.id);
	scanf("%s",temp.name);
	scanf("%lf",&temp.salary);
	scanf("%lf",&temp.allowance);
	return temp;
}
void displayAdmin(struct admin ad){
	printf("\nId: %d",ad.id);
	printf("\nName: %s",ad.name);
	printf("\nSalary: %lf",ad.salary);
	printf("\nAllowance: %lf\n",ad.allowance);
}