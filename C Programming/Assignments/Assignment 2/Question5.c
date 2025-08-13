#include<stdio.h>
void main(){
	int price,tprice;
	char ans;
	printf("Enter the total price:");
	scanf("%d",&price);
	printf("Are you a student(y/n): ");
	scanf(" %c",&ans);
	if(price>500 && ans=='y'){
		tprice=price-(price*0.20);
		printf("The discount applied is 20%% and the discounted price will be %d",tprice);
		
	}else if(price<500 && ans=='y'){
		tprice=price-(price*0.10);
		printf("The discount applied is 10%% and the discounted price will be %d",tprice);
		
	}else if(price>600 && ans=='n'){
		tprice=price-(price*0.15);
		printf("The discount applied is 15%% and the discounted price will be %d",tprice);
	}else if(price<600 && ans=='n'){
		tprice=price;
		printf("no discount applied .The total price will be %d",tprice);
	}
}
