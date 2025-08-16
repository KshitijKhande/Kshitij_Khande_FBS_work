//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.//

#include<stdio.h>
int operators(int,int,char);
int add(int,int,char);
int sub(int,int,char);
int mul(int,int,char);
int div(int,int,char);

void main(){
	int num1,num2,result;
	char opr;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the operand(+,-,*,/): ");
	scanf(" %c",&opr);
	printf("Enter the second number:");
	scanf("%d",&num2);
	result=operators(num1,num2,opr);
	printf("The result is %d",result);
}   //main ends here//

int operators(int num1,int num2,char opr){
	if(opr=='+')
		return add(num1,num2,opr);
	else if(opr=='-')
		return sub(num1,num2,opr);
	else if(opr=='*')
		return mul(num1,num2,opr);
	else if(opr=='/')
		return div(num1,num2,opr);
}
int add(int num1,int num2,char opr){
 	if(opr=='+')
		return num1+num2;	
}
int sub(int num1,int num2,char opr){
 	if(opr=='-')
		return num1-num2;
}
int mul(int num1,int num2,char opr){
 	if(opr=='*')
		return num1*num2;
}
int div(int num1,int num2,char opr){
 	if(opr=='/')
		return num1/num2;
}    //function ends here//
