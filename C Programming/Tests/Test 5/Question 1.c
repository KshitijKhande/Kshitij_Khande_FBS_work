//1. WAP to calculate selling price of book based on cost price and discount.
//( using function and nested if- else )

#include<stdio.h>
float sellingPrice(float,float);
void main(){
	float cost,discount=0.20;
	printf("Enter the cost price of your book:");
	scanf("%f",&cost);
	float res=sellingPrice(cost,discount);
	printf("The selling price of your book is %f",res);
}
float sellingPrice(float cost,float discount){
	float sprice=cost-(cost*discount);
	return sprice;
}