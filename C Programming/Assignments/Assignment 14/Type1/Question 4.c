//4. HR (id, name, salary, commission)

#include<stdio.h>
#include<string.h>
struct hr{
	int id;
	char name[20];
	double salary;
	double commission;
};
void main(){
	struct hr hr1,hr2;
	hr1.id=101;
	strcpy(hr1.name,"Kshitij");
	hr1.salary=29000;
	hr1.commission=5000;
	printf("The details of HR 1 are:");
	printf("\n%d",hr1.id);
	printf("\n%s",hr1.name);
	printf("\n%lf",hr1.salary);
	printf("\n%lf\n",hr1.commission);

	printf("\nEnter the details of HR 2:");
	scanf("%d",&hr2.id);
	scanf("%s",hr2.name);
	scanf("%lf",&hr2.salary);
	scanf("%lf",&hr2.commission);
	printf("\n%d\n%s\n%lf\n%lf",hr2.id,hr2.name,hr2.salary,hr2.commission);
}
