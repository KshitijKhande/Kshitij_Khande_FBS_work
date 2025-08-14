//2. WAP to initialize some amount in your account. Then give choice to user for deposit or
//withdraw. and display updated amount. Condition to withdraw (if the balance is less than
//3000 display can't withdraw the amount balance is not sufficient). ( using function )

#include<stdio.h>
void withdrawl(float);
void deposit(float);
void main(){
	float balance=15000,withdraw;
	int option;
	printf("Enter your option no\n1.Withdraw\n2.Deposit\n: ");
	scanf("%d",&option);
	if(option==1)
		withdrawl(balance);
	else if(option==2)
		deposit(balance);
	
	
	
}
void withdrawl(float balance){
	float withdraw;
	if(balance<=3000)
		printf("You cannot withdraw due to insufficient minimum balance.");	
	else if(balance>=3000){
		printf("Enter the withdrawl amount:");
		scanf("%f",&withdraw);
		balance=balance-withdraw;
		printf("%f",balance);
	}
}
void deposit(float balance){
	float deposit;
	printf("Enter the amount you want to deposit:");
	scanf("%f",&deposit);
	balance=balance+deposit;
	printf("The updated balance is %f:",balance);
}
