//Que 1: Write a program to print factors of number in given range.
//Eg. Range 10 to 15
//10 = 1 , 2 , 5 , 10
//11 = 1 , 11
//12 = 1, 2, 3, 4, 6, 12
//13 = 1, 13
//14 = 1, 2, 7, 14
//15 = 1, 3, 5, 15

#include<stdio.h>
void main(){
	int start=10,end=15;
	for(start=10;start<=end;start++){
		printf("Factors of %d: ",start);
		for(int i=1;i<=start;i++){
			if(start%i==0)
				printf("%d,",i);
		}
		printf("\n");
	}
}