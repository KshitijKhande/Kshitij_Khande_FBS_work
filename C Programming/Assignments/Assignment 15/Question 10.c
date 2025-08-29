//10. Product (id, name, quantity, price) using function

#include<stdio.h>
#include<string.h>
typedef struct product{
	int id;
	char name[20];
	int quantity;
	double price;
}product;
product storeProduct();
void displayProduct(product);
void main(){
	struct product p1,p2;
	printf("Enter the details of the product 1:");
	p1=storeProduct();
	printf("\nEnter the details of the product 2:");
	p2=storeProduct();
	printf("\nThe details of the product 1 are:");
	displayProduct(p1);
	printf("\nThe details of the product 2 are:");
	displayProduct(p2);

}
product storeProduct(){
	product temp;
	scanf("%d",&temp.id);
	fflush(stdin);
	gets(temp.name);
	scanf("%d",&temp.quantity);
	scanf("%lf",&temp.price);
	return temp;
}
void displayProduct(product pro){
	printf("\nProduct Id: %d",pro.id);
	printf("\nProduct Name: %s",pro.name);
	printf("\nProduct Quantity: %d",pro.quantity);
	printf("\nProduct Price: %lf\n",pro.price);
}