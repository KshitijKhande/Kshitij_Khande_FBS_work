//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.//

#include<stdio.h>
void operators(int,int,char);
void add(int,int,char);
void sub(int,int,char);
void mul(int,int,char);
void div(int,int,char);

void main(){
	int num1,num2;
	char opr;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the operand(+,-,*,/): ");
	scanf(" %c",&opr);
	operators(num1,num2,opr);
}   //main ends here//

void operators(int num1,int num2,char opr){
	

		add(num1,num2,opr);
		sub(num1,num2,opr);
		mul(num1,num2,opr);
		div(num1,num2,opr);
}
void add(int num1,int num2,char opr){
 	if(opr=='+')
		printf("The result is %d",num1+num2);
}
void sub(int num1,int num2,char opr){
 	if(opr=='-')
		printf("The result is %d",num1-num2);
}
void mul(int num1,int num2,char opr){
 	if(opr=='*')
		printf("The result is %d",num1*num2);
}
void div(int num1,int num2,char opr){
 	if(opr=='/')
		printf("The result is %d",num1/num2);
}    //function ends here//
