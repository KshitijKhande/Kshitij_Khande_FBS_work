//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

#include<stdio.h>
void discount();
void main(){
	discount();
}
void discount(){
	int price,tprice;
	char ans;
	printf("Enter the total price:");
	scanf("%d",&price);
	//getchar();
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