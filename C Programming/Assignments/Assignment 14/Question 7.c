//7. Time (hour, min, sec)

#include<stdio.h>
#include<string.h>
struct time{
	int hour;
	int min;
	int sec;
};
void main(){
	struct time t1,t2;
	t1.hour=11;
	t1.min=24;
	t1.sec=25;
	printf("The time is %d:%d:%d",t1.hour,t1.min,t1.sec);
	
	printf("\nEnter the second date:");
	scanf("\n%d",&t2.hour);
	scanf("\n%d",&t2.min);
	scanf("\n%d",&t2.sec);
	printf("\nThe date is %d:%d:%d",t2.hour,t2.min,t2.sec);
}