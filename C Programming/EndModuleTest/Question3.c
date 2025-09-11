//Set B Question 3- Use struct to store and display product and calculate the discounted price and total price

#include<stdio.h>
typedef struct market{
	int id;
	char name[20];
	double price;
}market;
void storeProducts(market*,int);
void displayProducts(market*,int);
void totalPrice(market*,int);
void main(){
	market products[100];
	int size;
	printf("Enter the number of products you want to enter: ");
	scanf("%d",&size);
	storeProducts(products,size);
	displayProducts(products,size);
	totalPrice(products,size);
	
	
}
void storeProducts(market* products,int size){
	for(int i=0;i<size;i++){
		printf("\nEnter the details of product %d",i+1);
		printf("\nEnter Product Id: ");
		scanf("%d",&products[i].id);
		getchar();
		printf("Enter Product Name: ");
		gets(products[i].name);
		printf("Enter Product Price: ");
		scanf("%lf",&products[i].price);
	}
	
}
void displayProducts(market* products,int size){
	for(int i=0;i<size;i++){
		printf("\nThe details of the product %d are",i+1);
		printf("\nProduct Id: %d",products[i].id);
		printf("\nProduct Name: %s",products[i].name);
		printf("\nProduct Price: %lf",products[i].price);
	}
	
}
void totalPrice(market* products,int size){
	double totalprice=0;
	double discountprice=0;
	for(int i=0;i<size;i++){
		totalprice += products[i].price;
	}
	printf("\nThe total price is : %lf",totalprice);
	if(totalprice>500){
		discountprice=totalprice-(totalprice*0.20);
	}else{
		discountprice=totalprice-(totalprice*0.05);
	}
	
	printf("\nThe discounted price is : %lf",discountprice);
	
	double paymentprice=0;
	paymentprice=discountprice+(discountprice*0.18);
	printf("\nThe price after tax and discount is: %lf",paymentprice);
	
	
}