//3 Sum of numbers in given range.  Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

#include<stdio.h>
void sumnum(int*,int*,int*);
void main(){
	int start=1,end=5,sum=0;
	int* start1=&start,*end1=&end,*sum1=&sum;
	sumnum(start1,end1,sum1);
}
void sumnum(int* start,int* end,int* sum){
	while(*start<=*end){
		printf("%d ",*start);
		*sum=*sum+*start;
		(*start)++;
	}
	printf("\nThe sum of numbers is %d",*sum);
}