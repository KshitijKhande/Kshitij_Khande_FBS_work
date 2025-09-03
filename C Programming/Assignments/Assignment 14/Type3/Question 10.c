//10. Product (id, name, quantity, price) using function

#include<stdio.h>
#include<string.h>
typedef struct product{
	int id;
	char name[20];
	int quantity;
	double price;
}product;
void storeProduct(product*,int);
void displayProduct(product*,int);
void main(){
	product pro[3];
	storeProduct(pro,3);
	displayProduct(pro,3);

}
void storeProduct(product *pro,int size){
	for(int i=0;i<size;i++){
		printf("Enter the details of the product %d:",i+1);
		scanf("%d",&pro[i].id);
		fflush(stdin);
		gets(pro[i].name);
		scanf("%d",&pro[i].quantity);
		scanf("%lf",&pro[i].price);
	}

}
void displayProduct(product *pro,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of the product %d are:",i+1);
		printf("\nProduct Id: %d",pro[i].id);
		printf("\nProduct Name: %s",pro[i].name);
		printf("\nProduct Quantity: %d",pro[i].quantity);
		printf("\nProduct Price: %lf\n",pro[i].price);
	}
	
}