#include<stdio.h>
int main(){
	int no=4;
	for(int i=1;i<=no;i++){
		for(int j=1;j<=no;j++){
			if(i==1||j==1||i==no||j==no || i==j){
				printf("* ");
			}else
			printf("  ");
		}
		printf("\n");
	}
}