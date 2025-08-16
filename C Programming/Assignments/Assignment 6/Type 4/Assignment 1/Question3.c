//3. Write a program to check whether a given year is a leap year.//

#include<stdio.h>
int leapyear(int);
void main(){
	int year=2100;
	int res=leapyear(year);
	if(res)
		printf("The year %d is a leap year",year);
	else
		printf("The year %d is not a leap year",year);
}     //main ends here//
int leapyear(int year){
	if(year%4==0 || year%400==0 && year%100!=0)
		return 1;
	else
		return 0;
}    //function ends here//