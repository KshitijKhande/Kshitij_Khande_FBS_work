//5 Check the given number is Armstrong number or not.. Input: n = 153 Output: Armstrong//

#include<stdio.h>
int armstrong();
void main(){
	int res=armstrong();
	printf(res);
}
int armstrong(){
	int no=153,r,sum=0,temp=no;
	while(temp!=0){
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
	}
	if(sum==no)
		return printf("%d is a armstrong number",no);
	else
		return printf("%d is not a armstrong number",no);
}
