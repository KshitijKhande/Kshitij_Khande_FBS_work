#include<stdio.h>
int main(){
	int num,sum;
	int i,j;
	
	printf("Enter the value of range:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		sum=0;
		for(j=1;j<i;j++){
			if(i%j==0){			
			sum=sum+j;
		}
		}
			if(sum==i){
			printf("%d\n",i);
	}
	
	}
	
}
