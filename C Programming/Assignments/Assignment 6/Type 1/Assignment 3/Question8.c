//8 Check the given number is Strong number or not. Input: n = 145 Output: Strong

#include<stdio.h>
void strong();
void main(){
	strong();
}
void strong(){
	int num=145,r,sum=0,i,fact,temp=num;
	while(temp!=0){
		fact=1;
		r=temp%10;
		for(i=1;i<=r;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==num){
		printf("Number is a strong number");
	}else{
	
	printf("Number is not a strong number");
	}
}