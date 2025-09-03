//7. Time (hour, min, sec)

#include<stdio.h>
#include<string.h>
typedef struct time{
	int hours;
	int minutes;
	int seconds;
}time;
time formatTime(time);
time storeTime();
void displayTime(time);
void main(){
	time t1,t2;
	printf("Enter the hour,minutes and seconds: ");
	t1=storeTime();
	t1=formatTime(t1);
	printf("\nThe time is: ");
	displayTime(t1);
}
time formatTime(time t){
	int total=(t.hours*3600)+(t.minutes*60)+t.seconds;
	t.hours=total/3600;
	int min=total%3600;
	t.minutes=min/60;
	t.seconds=min%60;
	return t;
	
}
time storeTime(){
	time temp;
	scanf("\n%d",&temp.hours);
	scanf("\n%d",&temp.minutes);
	scanf("\n%d",&temp.seconds);
	return temp;
}
void displayTime(time t){
	printf("\nThe date is %d:%d:%d",t.hours,t.minutes,t.seconds);
}