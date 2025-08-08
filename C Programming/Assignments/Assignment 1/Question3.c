#include<stdio.h>
void main(){
	int year=2100;
	if(year%4==0 && year%400==0){
		printf("The year %d is a leap year",year);
		
	}else{
		printf("The year %d is not a leap year",year);
	}
}