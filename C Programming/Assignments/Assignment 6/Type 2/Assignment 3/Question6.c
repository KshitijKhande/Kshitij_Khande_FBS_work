//6 Check the given number is Perfect number or not. Input: n = 28  Output: Perfect//

#include<stdio.h>
int perfectno();
void main(){
	int res=perfectno();
	printf(res);
}
int perfectno(){
	int num=6,sum=0;
	int i;
	for(i=1;i<num;i++){
		if(num%i==0)
		sum=sum+i;
	}
	
	if(sum==num)
		return printf("%d is a perfect number",num);
	else
		return printf("%d is not a perfect number",num);
}
