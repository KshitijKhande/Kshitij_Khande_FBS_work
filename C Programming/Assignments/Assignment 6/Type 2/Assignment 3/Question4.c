//4 Check the given number is prime or not. Input: n = 7 Output: Prime//

#include <stdio.h>
int isprime();
void main(){
    int res=isprime();
    printf(res);
}
int isprime(){
	int no = 12;
    int flag= 1; 
	if (no <= 1) 
        flag = 0;
    else{
        for(int i = 2; i * i <= no; i++) {
            if (no % i == 0)
                flag = 0;
        }
    }
	if(flag)
        return printf("%d is a Prime number.\n", no);
    else
    	return printf("%d is Not a Prime number.\n", no);
}
