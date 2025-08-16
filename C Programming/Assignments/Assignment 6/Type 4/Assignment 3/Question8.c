//8 Check the given number is Strong number or not. Input: n = 145 Output: Strong

#include<stdio.h>
int strong(int,int,int,int);
void main(){
	//int num=145;
	int num,sum=0,fact,temp;
	printf("Enter the number of your choice: ");
	scanf("%d",&num);
	temp=num;
	int res=strong(num,sum,fact,temp);
	if(res)
		printf("%d is a strong number",num);
	else
		printf("%d is not strong number",num);
}
int strong(int num,int sum,int fact,int temp){
	
	while(temp!=0){
		fact=1;
		int r=temp%10;
		for(int i=1;i<=r;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(sum==num)
		return 1;
	else
		return 0;
}