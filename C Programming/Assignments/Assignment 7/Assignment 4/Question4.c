//4. Print strong numbers in the given range 1 to n.//

#include<stdio.h>
void strong(int*,int*,int*,int*,int*);
void main(){
	int num,r,sum,fact,temp;
	int* num1=&num,*r1=&r,*sum1=&sum,*fact1=&fact,*temp1=&temp;
	printf("Enter the value of the range:");
	scanf("%d",&num);
	printf("The strong numbers in the range 1 to %d are\n",num);
	strong(num1,r1,sum1,fact1,temp1);
}
void strong(int* num,int* r,int* sum,int* fact,int* temp){
	for(int i=1;i<*num;i++){
		*sum=0;
		*temp=i;
		while(*temp!=0){
		*fact=1;
		*r=*temp%10;
		for(int j=1;j<=*r;j++){
			*fact=*fact*j;
		}
		*sum=*sum+*fact;
		*temp=*temp/10;
	}
		if(*sum==i)
		printf("%d\n",i);
	}
}