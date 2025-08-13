//7 Find factorial of given number. Input: n = 5 Output: 120//

#include<stdio.h>
void main(){
	int start=1,end=5,fact=1;
	while(start<=end){
		fact=fact*start;
		start++;
	}
	printf("The factorial of %d is %d",end,fact);
}