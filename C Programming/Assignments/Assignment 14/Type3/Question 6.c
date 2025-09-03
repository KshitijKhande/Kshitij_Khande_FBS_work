//6. Date (date, month, year) using function

#include<stdio.h>
#include<string.h>
typedef struct date{
	int day;
	char month[10];
	int year;
}date;
date storeDate(date* d,int);
void displayDate(date* d,int);
void main(){
	date d[3];
	storeDate(d,3);
	displayDate(d,3);
}
date storeDate(date *d,int size){
	for(int i=0;i<size;i++){
		printf("Enter the date %d:",i+1);
		scanf("\n%d",&d[i].day);
		scanf("\n%s",d[i].month);
		scanf("\n%d",&d[i].year);
	}
}
void displayDate(date *d,int size){
	for(int i=0;i<size;i++){
		printf("\nThe date is %d-%s-%d",d[i].day,d[i].month,d[i].year);
	}
	
}