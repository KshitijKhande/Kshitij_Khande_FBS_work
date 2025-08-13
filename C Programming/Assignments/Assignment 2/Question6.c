#include<stdio.h>
void main(){
	int no;
	printf("Enter a number:");
	scanf("%d",&no);
	if(no%3==0 && no%5==0){
		printf("%d is divisible by both 3 and 5",no);
	}else if(no%3==0 && no%5!=0){
		printf("%d is divisible by 3 but not by 5",no);
	}else if(no%3!=0 && no%5==0){
		printf("%d is not divisible by 3 but is divisible by 5",no);
	}else if(no%3!=0 && no%5!=0){
		printf("%d is not divisible by both 3 and 5",no);
	}
	
}