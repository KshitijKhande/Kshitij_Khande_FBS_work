#include<stdio.h>
void main(){
	int num1,num2,result;
	char opr;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the operand(+,-,*,/): ");
	scanf(" %c",&opr);
	if(opr=='+'){
		printf("The result is %d",num1+num2);
	}else if(opr=='-'){
		printf("The result is %d",num1-num2);
	}if(opr=='*'){
		printf("The result is %d",num1*num2);
	}if(opr=='/'){
		printf("The result is %d",num1/num2);
	}
}