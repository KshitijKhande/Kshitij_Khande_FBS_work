//7 Find factorial of given number. Input: n = 5 Output: 120//

#include<stdio.h>
int factorial(start,end,fact);
void main(){
	int start=1,end=5,fact=1;
	int res=factorial(start,end,fact);
	printf("The factorial of %d is %d",end,res);
}
int factorial(int start,int end,int fact){
	while(start<=end){
		fact=fact*start;
		start++;
	}
	return fact;
}