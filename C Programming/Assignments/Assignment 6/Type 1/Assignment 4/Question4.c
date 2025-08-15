//4. Print strong numbers in the given range 1 to n.//

#include<stdio.h>
void strong();
void main(){
	strong();
}
void strong(){
	int num,r,sum,i,j,fact,temp;
	
	printf("Enter the value of the range:");
	scanf("%d",&num);
	printf("The strong numbers in the range 1 to %d are\n",num);
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
		if(sum==i)
		printf("%d\n",i);
	}
}