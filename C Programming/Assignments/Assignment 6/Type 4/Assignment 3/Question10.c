//10 Find Sum of first and last digit of given number. Input: n = 12345 Output: 6 (1 + 5)

#include<stdio.h>
int sumfdld(int);
void main(){
	int no,sum;
	printf("Enter any number of your choice: ");
	scanf("%d",&no);
	sum=sumfdld(no);
	printf("The sum of first digit and last digit id %d",sum);
}
int sumfdld(int no){
	int ld=no%10;
	int fd=no;
	while(fd>10)
		fd=fd/10;
	return fd+ld;
}
