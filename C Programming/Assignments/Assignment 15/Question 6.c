//6. Date (date, month, year) using function

#include<stdio.h>
#include<string.h>
typedef struct date{
	int day;
	char month[10];
	int year;
}date;
date storeDate();
void displayDate(date);
void main(){
	date date1,date2;
	printf("Enter the date 1:");
	date1=storeDate();
	printf("\nEnter the date 2:");
	date2=storeDate();
	displayDate(date1);
	displayDate(date2);
}
date storeDate(){
	date temp;
	scanf("\n%d",&temp.day);
	scanf("\n%s",temp.month);
	scanf("\n%d",&temp.year);
	return temp;	
}
void displayDate(date d){
	printf("\nThe date is %d-%s-%d",d.day,d.month,d.year);
}