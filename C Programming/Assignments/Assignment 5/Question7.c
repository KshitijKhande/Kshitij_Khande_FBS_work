#include<stdio.h>
void main(){
	int no,num=1;
	printf("Enter a number:");
	scanf("%d",&no);
	for(int i=1;i<=no;i++){
		for(int j=1;j<=i;j++){
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}