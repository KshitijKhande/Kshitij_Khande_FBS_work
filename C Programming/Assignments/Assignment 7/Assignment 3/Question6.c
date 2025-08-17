//6 Check the given number is Perfect number or not. Input: n = 28  Output: Perfect//

#include<stdio.h>
void perfectno(int*,int*);
void main(){
	int num=6,sum=0;
	int* num1=&num, *sum1=&sum;
	perfectno(num1,sum1);
}
void perfectno(int* num,int* sum){
	
	for(int i=1;i<*num;i++){
		if(*num%i==0)
		*sum=*sum+i;		
	}
	if(*sum==*num)
		printf("%d is a perfect number",*num);
	else
		printf("%d is not a perfect number",*num);
}
