//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

#include<stdio.h>
int discount(int,char);
void main(){
	int price,tprice;
	char ans;
	printf("Enter the total price:");
	scanf("%d",&price);
	printf("Are you a student(y/n): ");
	scanf(" %c",&ans);
	tprice=discount(price,ans);
	printf("The total price after discount is %d",tprice);
	
}
int discount(int price,char ans){
	if(price>500 && ans=='y')
		return price-(price*0.20);
	else if(price<500 && ans=='y')
		return price-(price*0.10);
	else if(price>600 && ans=='n')   
		return price-(price*0.15);
	else if(price<600 && ans=='n')
		return price;
	
}