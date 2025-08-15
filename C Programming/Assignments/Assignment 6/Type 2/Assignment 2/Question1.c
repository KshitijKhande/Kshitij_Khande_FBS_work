//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.//

#include<stdio.h>
int operators();
int add();
int sub();
int mul();
int div();

int num1,num2,result;
char opr;
void main(){

	operators();
}   //main ends here//

int operators(){
	
	
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the operand(+,-,*,/): ");
	scanf(" %c",&opr);
	printf("Enter the second number:");
	scanf("%d",&num2);
	if(opr=="+")
		result=add();
	else if(opr=="-")
		result=sub();
	else if(opr=="*")
		result=mul();
	else if(opr=="/")
		result=div();
	printf("The result of the operation is: %d",result);
		
}
int add(){
 	if(opr=='+')
		return num1+num2;
}
int sub(){
 	if(opr=='-')
		return num1-num2;
}
int mul(){
 	if(opr=='*')
		return num1*num2;
}
int div(){
 	if(opr=='/')
		return num1/num2;
}    //function ends here//
