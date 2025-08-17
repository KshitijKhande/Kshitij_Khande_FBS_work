//7 Find factorial of given number. Input: n = 5 Output: 120//

#include<stdio.h>
void factorial(int*,int*,int*);
void main(){
	int start=1,end=5,fact=1;
	int* start1=&start,*end1=&end,*fact1=&fact;
	factorial(start1,end1,fact1);
}
void factorial(int* start,int* end,int* fact){
	
	while(*start<=*end){
		*fact=*fact**start;
		(*start)++;
	}
	printf("The factorial of %d is %d",*end,*fact);

}