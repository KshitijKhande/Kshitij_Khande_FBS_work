//7. Calculating total salary based on basic. If basic <=5000 da, ta and hra will be 
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include<stdio.h>
int salary();
void main(){
	int res=salary();
	printf("The total salary is %d",res);
}       //main ends here//
int salary(){
	int basic=6700;
	int total,da,ta,hra;
	if(basic<=5000){
		da=basic+(basic*0.10);
		ta=basic+(basic*0.20);
		hra=basic+(basic*0.25);
	}else{
		da=basic+(basic*0.15);
		ta=basic+(basic*0.25);
		hra=basic+(basic*0.30);
	}
	total=basic+da+ta+hra;
	return total;
	//function ends here//
}