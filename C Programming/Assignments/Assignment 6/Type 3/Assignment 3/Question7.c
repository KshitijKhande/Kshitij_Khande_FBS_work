//7 Find factorial of given number. Input: n = 5 Output: 120//

#include<stdio.h>
void factorial(int,int,int);
void main(){
	int start=1,end=5,fact=1;
	factorial(start,end,fact);
}
void factorial(int start,int end,int fact){
	
	while(start<=end){
		fact=fact*start;
		start++;
	}
	printf("The factorial of %d is %d",end,fact);

}