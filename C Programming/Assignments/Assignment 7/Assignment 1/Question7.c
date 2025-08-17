//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include<stdio.h>
void salary(int*);
void main(){
	int basic=6700;
	int* ptr=&basic;
	salary(ptr);
}
void salary(int* ptr){
	
	int total,da,ta,hra;
	if(*ptr<=5000){
		da=*ptr+(*ptr*0.10);
		ta=*ptr+(*ptr*0.20);
		hra=*ptr+(*ptr*0.25);
	}else{
		da=*ptr+(*ptr*0.15);
		ta=*ptr+(*ptr*0.25);
		hra=*ptr+(*ptr*0.30);
	}
	total=*ptr+da+ta+hra;
	printf("The total salary is %d",total);
}