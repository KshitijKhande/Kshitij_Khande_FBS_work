#include<stdio.h>
void main(){
	int num,r,sum,i,j,fact,temp;
	
	printf("Enter the value of the range:");
	scanf("%d",&num);
	for(i=1;i<num;i++){
		sum=0;
		temp=i;
		while(temp!=0){
		fact=1;
		r=temp%10;
		for(j=1;j<=r;j++){
			fact=fact*j;
		}
		sum=sum+fact;
		temp=temp/10;
	}
		if(sum==i){
		printf("%d\n",i);
	}
	}
	

}