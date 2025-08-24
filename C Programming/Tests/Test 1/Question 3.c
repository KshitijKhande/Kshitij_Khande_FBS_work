//Que 3. Print last 2 digit of number.   Eg. i/p: 223410   o/p: 10

#include<stdio.h>
void main(){
	int num,lastDigits;
	printf("Input a number:");
	scanf("%d",&num);
	lastDigits=num%100;
	printf("\nThe last two digits is %d",lastDigits);
}