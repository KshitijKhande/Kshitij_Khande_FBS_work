//3. Write a program to check whether a given year is a leap year.//

#include<stdio.h>
int leapyear();
void main(){
	int res=leapyear();
	if(res)
		printf("The year is a leap year");
	else
		printf("The year is not a leap year");
	
}     //main ends here//
int leapyear(){
	int year;
	printf("Enter a year:");
	scanf("%d",&year);
	if(year%4==0 || year%400==0 && year%100!=0)
		return 1;
	else
		return 0;
}    //function ends here//