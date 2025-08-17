//5 Check the given number is Armstrong number or not.. Input: n = 153 Output: Armstrong//

#include<stdio.h>
void armstrong(int*,int*,int*);
void main(){
	int no=153,sum=0,temp=no;
	int* no1=&no,*sum1=&sum,*temp1=&temp;
	armstrong(no1,sum1,temp1);
}
void armstrong(int* no,int* sum,int* temp){
	while(*temp!=0){
		int r=*temp%10;
		*sum=*sum+r*r*r;
		*temp=*temp/10;
	}
	if(*sum==*no){
		printf("%d is a armstrong number",*no);
	}else{
		printf("%d is not a armstrong number",*no);
	}
	
}
