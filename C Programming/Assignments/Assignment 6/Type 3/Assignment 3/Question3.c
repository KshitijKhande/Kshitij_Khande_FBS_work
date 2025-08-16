//3 Sum of numbers in given range.  Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

#include<stdio.h>
void sumnum(int,int,int);
void main(){
	int start=1,end=5,sum=0;
	sumnum(start,end,sum);
}
void sumnum(int start,int end,int sum){
	while(start<=end){
		printf("%d ",start);
		sum=sum+start;
		start++;
	}
	printf("\nThe sum of numbers is %d",sum);
}