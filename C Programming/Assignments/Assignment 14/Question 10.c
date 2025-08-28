//10. Product (id, name, quantity, price)

#include<stdio.h>
#include<string.h>
struct product{
	int id;
	char name[20];
	int quantity;
	double price;
};
void main(){
	struct product p1,p2;
	p1.id=11;
	strcpy(p1.name,"Samsung Tv");
	p1.quantity=55;
	p1.price=34000;
	printf("The details of product 1 are: ");
	printf("\n%d",p1.id);
	printf("\n%s",p1.name);
	printf("\n%d",p1.quantity);
	printf("\n%lf\n",p1.price);
	
	printf("\nEnter the details of the product 2:");
	scanf("%d",&p2.id);
	fflush(stdin);
	gets(p2.name);
	scanf("%d",&p2.quantity);
	scanf("%lf",&p2.price);
	printf("\nThe details of the product 2 are:");
	printf("\n%d\n%s\n%d\n%lf",p2.id,p2.name,p2.quantity,p2.price);
}