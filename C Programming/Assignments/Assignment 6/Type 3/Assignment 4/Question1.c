//1. Print armstrong numbers in the given range 1 to n.//

#include<stdio.h>
void armstrong(int,int,int,int);
void main(){
	int no,r,sum,temp;
	printf("Enter the value of n:");
	scanf("%d",&no);
	printf("The armstrong numbers in the range 1 to %d are\n",no);
	armstrong(no,r,sum,temp);
}
void armstrong(int no,int r,int sum,int temp){
	for(int i=1;i<=no;i++){
		temp=i;
		sum=0;
		
		while(temp!=0){
		r=temp%10;
		sum=sum+r*r*r;
		temp=temp/10;
		}
		if(sum==i)
			printf("%d\n",i);
	}
}
