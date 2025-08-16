//6 Check the given number is Perfect number or not. Input: n = 28  Output: Perfect//

#include<stdio.h>
int perfectno(int,int);
void main(){
	int num=6,sum=0;
	int res=perfectno(num,sum);
	if(res==num)
		printf("%d is a perfect number",num);
	else
		printf("%d is not a perfect number",num);
	
}
int perfectno(int num,int sum){
	for(int i=1;i<num;i++){
		if(num%i==0)
		sum=sum+i;
	}
	return sum;
}
