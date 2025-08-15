//1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operations.//

#include<stdio.h>
void operators();
void add();
void sub();
void mul();
void div();

void main(){
	operators();
}   //main ends here//
int num1,num2,result;
char opr;
void operators(){
	
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the operand(+,-,*,/): ");
	scanf(" %c",&opr);
		add();
		sub();
		mul();
		div();
}
void add(){
 	if(opr=='+'){
		printf("The result is %d",num1+num2);
}
}
void sub(){
 	if(opr=='-'){
		printf("The result is %d",num1-num2);
}
}
void mul(){
 	if(opr=='*'){
		printf("The result is %d",num1*num2);
}
}
void div(){
 	if(opr=='/'){
		printf("The result is %d",num1/num2);
}
}    //function ends here//
