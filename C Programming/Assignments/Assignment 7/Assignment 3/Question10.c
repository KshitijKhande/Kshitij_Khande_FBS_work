//10 Find Sum of first and last digit of given number. Input: n = 12345 Output: 6 (1 + 5)

#include<stdio.h>
void sumfdld(int*);
void main(){
	int no=12345;
	int* no1=&no;
	sumfdld(no1);
}
void sumfdld(int* no){
	int ld=*no%10;
	int fd=*no;
	
	while(fd>10){
		fd=fd/10;
	}
	int sum=fd+ld;
	printf("The sum of first digit and last digit is %d",sum);
}
