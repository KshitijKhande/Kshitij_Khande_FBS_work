//4 Check the given number is prime or not. Input: n = 7 Output: Prime//

#include <stdio.h>
int isprime(int,int);
void main() {
	int no=7,flag= 1; 
    int res=isprime(no,flag);
    if (res)
        printf("%d is a Prime number.\n", no);
    else
        printf("%d is Not a Prime number.\n", no);
}
int isprime(int no,int flag){
	if(no<=1) 
        flag=0;
    else{
        for(int i=2; i*i<=no;i++) {
            if(no%i==0)
                flag=0;
        }
    }
	return flag;
}
