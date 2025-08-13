#include<stdio.h>
void main(){
	int no1=13,no2=8,no3=7;
	if(no1>no2 && no2>no3){
		printf("%d is the greater number",no1);
	}
	else if(no1<no2 && no2>no3){
		printf("%d is the greater number",no2);
	}
	else if(no1<no2 && no2<no3){
		printf("%d is the greater number",no3);
	}
}