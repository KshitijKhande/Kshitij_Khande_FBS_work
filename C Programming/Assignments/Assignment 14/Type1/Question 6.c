//6. Date (date, month, year)

#include<stdio.h>
#include<string.h>
struct date{
	int day;
	char month[10];
	int year;
};
void main(){
	struct date date1,date2;
	date1.day=11;
	strcpy(date1.month,"May");
	date1.year=2025;
	printf("The date is %d %s %d",date1.day,date1.month,date1.year);
	
	printf("\nEnter the second date:");
	scanf("\n%d",&date2.day);
	scanf("\n%s",date2.month);
	scanf("\n%d",&date2.year);
	printf("\nThe date is %d %s %d",date2.day,date2.month,date2.year);
}