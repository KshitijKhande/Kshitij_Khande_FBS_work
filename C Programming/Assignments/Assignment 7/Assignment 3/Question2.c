//2 Print table for given number. Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>
void table(int*);
void main(){
	int i=1;
	int *ptr=&i;
	table(ptr);
}
void table(int* i){
	while(*i<=10){
		printf("%d ",(*i)*5);
		(*i)++;
	}
}