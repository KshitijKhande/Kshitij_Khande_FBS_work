//3. Write a program to check whether a given year is a leap year.//

#include<stdio.h>
void leapyear();
void main(){
	leapyear();
}     //main ends here//
void leapyear(){
	int year=2100;
	if(year%4==0 || year%400==0 && year%100!=0){
		printf("The year %d is a leap year",year);
		
	}else{
		printf("The year %d is not a leap year",year);
	}
}    //function ends here//