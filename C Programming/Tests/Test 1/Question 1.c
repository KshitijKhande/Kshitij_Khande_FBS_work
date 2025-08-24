//Que 1. Convert the time entered in hh,min and sec into total seconds.

#include<stdio.h>
void main(){
	int hours,minutes,seconds,total;
	
	printf("Enter hours:");
	scanf("%d",&hours);
	printf("\nEnter minutes:");
	scanf("%d",&minutes);
	printf("\nEnter seconds:");
	scanf("%d",&seconds);
	
	total=(hours*3600)+(minutes*60)+seconds;
	printf("\nThe time in seconds is %d",total);
}