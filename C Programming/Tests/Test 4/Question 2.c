//Que 2: Write a program to find power of any number. Eg. 2^4 = 16.

#include<stdio.h>
#include<math.h>
void main(){
	int no,power;
	//int no=2,power=4;
	printf("Enter any number: ");
	scanf("%d",&no);
	printf("Enter the power: ");
	scanf("%d",&power);
	int res=pow(no,power);
	printf("\n%d to the power %d is %d ",no,power,res);
}