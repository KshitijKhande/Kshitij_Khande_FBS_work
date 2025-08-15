//10 Find Sum of first and last digit of given number. Input: n = 12345 Output: 6 (1 + 5)

#include<stdio.h>
int sumfdld();
void main(){
	int res=sumfdld();
	printf("The sum of first digit and last digit is %d",res);
}
int sumfdld(){
	int no=12345,sum;
	int ld=no%10;
	int fd=no;
	
	while(fd>10){
		fd=fd/10;
	}
	return sum=fd+ld;
	
}
