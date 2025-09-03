//7. Time (hour, min, sec)

#include<stdio.h>
#include<string.h>
typedef struct time{
	int hours;
	int minutes;
	int seconds;
}time;
void formatTime(time*,int);
void storeTime(time*,int);
void displayTime(time*,int);
void main(){
	time t[3];
	storeTime(t,3);
	formatTime(t,3);
	displayTime(t,3);
}
void formatTime(time *t,int size){
	for(int i=0;i<size;i++){
		int total=(t[i].hours*3600)+(t[i].minutes*60)+t[i].seconds;
		t[i].hours=total/3600;
		int min=total%3600;
		t[i].minutes=min/60;
		t[i].seconds=min%60;
	}

	
}
void storeTime(time *t,int size){
	for(int i=0;i<size;i++){
		printf("Enter the hour,minutes and seconds: ");
		scanf("%d",&t[i].hours);
	 	scanf("%d",&t[i].minutes);
		scanf("%d",&t[i].seconds);
	}


}
void displayTime(time *t,int size){
	for(int i=0;i<size;i++){
		printf("\nThe time is %d:%d:%d",t[i].hours,t[i].minutes,t[i].seconds);
	
	}
}