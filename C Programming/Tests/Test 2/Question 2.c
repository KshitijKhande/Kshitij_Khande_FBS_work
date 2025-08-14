//Que 2. WAP to check if number is positive, negative or neutral (0).

#include<stdio.h>
int main(){
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	if(no>0)
		printf("%d is Positive Number",no);
	else if(no<0)
		printf("%d is Negative Number",no);
	else if(no==0)
		printf("%d is Neutral Number",no);
	else
		printf("Enter a valid number.");
}