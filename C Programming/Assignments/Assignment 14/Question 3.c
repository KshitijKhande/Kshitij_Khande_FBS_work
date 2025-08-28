//3. Admin (id, name, salary, allowance)

#include<stdio.h>
#include<string.h>
struct admin{
	int id;
	char name[20];
	double salary;
	double allowance;
};
void main(){
	struct admin ad1,ad2;
	ad1.id=101;
	strcpy(ad1.name,"Kshitij");
	ad1.salary=29000;
	ad1.allowance=5000;
	printf("The details of Admin 1 are:");
	printf("\n%d",ad1.id);
	printf("\n%s",ad1.name);
	printf("\n%lf",ad1.salary);
	printf("\n%lf\n",ad1.allowance);

	printf("\nEnter the details of Admin 2:");
	scanf("%d",&ad2.id);
	scanf("%s",ad2.name);
	scanf("%lf",&ad2.salary);
	scanf("%lf",&ad2.allowance);
	printf("\nThe details of Admin 2 are:");
	printf("\n%d\n%s\n%lf\n%lf\n",ad2.id,ad2.name,ad2.salary,ad2.allowance);
	
}