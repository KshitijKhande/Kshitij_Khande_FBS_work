//8 Check the given number is Strong number or not. Input: n = 145 Output: Strong

#include<stdio.h>
void strong(int*,int*,int*);
void main(){
	int num=145,sum=0,temp=num;
	int *num1=&num,*sum1=&sum,*temp1=&temp;
	strong(num1,sum1,temp1);
}
void strong(int* num,int* sum,int* temp){
	
	while(*temp!=0){
		int fact=1;
		int r=*temp%10;
		for(int i=1;i<=r;i++){
			fact=fact*i;
		}
		*sum=*sum+fact;
		*temp=*temp/10;
	}
	if(*sum==*num){
		printf("%d is a strong number",*num);
	}else{
	
	printf("%d is not a strong number",*num);
	}
}