//8 Check the given number is Strong number or not. Input: n = 145 Output: Strong

#include<stdio.h>
int strong();
void main(){
	int res=strong();
	printf(res);
}
int strong(){
	int num=145,r,sum=0,i,fact,temp=num;
	while(temp!=0){
		fact=1;
		r=temp%10;
		for(i=1;i<=r;i++)
			fact=fact*i;
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==num)
		return printf("%d is a strong number",num);
	else
		return printf("%d is not a strong number",num);
}