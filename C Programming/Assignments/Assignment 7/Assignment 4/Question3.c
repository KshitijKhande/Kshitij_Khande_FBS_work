//3. Print perfect numbers in the given range 1 to n.//

#include<stdio.h>
void perfect(int*,int*);
void main(){
	int num,sum;
	int* num1=&num,*sum1=&sum;
	printf("Enter the value of range:");
	scanf("%d",&num);
	printf("The perfect numbers in range 1 to %d are:\n",num);
	perfect(num1,sum1);
}
void perfect(int* num,int* sum){
	for(int i=1;i<=*num;i++){
		*sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0)		
			*sum=*sum+j;
		}
			if(*sum==i)
			printf("%d\n",i);
	}
}
