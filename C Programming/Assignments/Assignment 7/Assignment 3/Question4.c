//4 Check the given number is prime or not. Input: n = 7 Output: Prime//

#include <stdio.h>
void isprime(int*,int*);
void main() {
	int no = 8,flag= 1; 
	int* no1=&no,*flag1=&flag;
    isprime(no1,flag1);
}
void isprime(int* no,int* flag){
	if (*no<= 1) 
        *flag=0;
    else {
        for (int i=2;i*i<=*no;i++){
            if (*no%i==0)
                *flag=0;
        }
    }
	if (*flag)
        printf("%d is a Prime number.\n",*no);
    else
        printf("%d is Not a Prime number.\n",*no);
}
