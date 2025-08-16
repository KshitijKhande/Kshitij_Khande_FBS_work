//5 Check the given number is Armstrong number or not.. Input: n = 153 Output: Armstrong//

#include<stdio.h>
void armstrong(int,int,int,int);
void main(){
	int no=153,r,sum=0,temp=no;
	armstrong(no,r,sum,temp);
}
void armstrong(int no,int r,int sum,int temp){
	while(temp!=0){
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	if(sum==no){
		printf("The no is a armstrong number");
	}else{
		printf("The no is not a armstrong number");
	}
	
}
