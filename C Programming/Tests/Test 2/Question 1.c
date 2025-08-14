//Que 1. WAP to calculate electricity bill.
//For 1-50 units – 30 rs/unit , For 51-150 units – 40 rs/unit, For 151and above units – 50 rs/unit.

#include<stdio.h>
int billing();
int main(){
	billing();
}
int billing(){
	int units,bill;
	printf("Enter your billing units:");
	scanf("%d",&units);
	if(units>=1 && units<=50)
		bill=units*30;
	else if(units>=51 && units<=150)
		bill=units*40;
	else if(units>=151)
		bill=units*50;
	printf("Your total bill is %d",bill);
}
