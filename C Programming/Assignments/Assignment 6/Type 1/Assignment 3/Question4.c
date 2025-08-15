//4 Check the given number is prime or not. Input: n = 7 Output: Prime//

#include <stdio.h>
void isprime();
void main() {
    isprime();
}
void isprime(){
	int no = 8;
    int flag= 1; 

    if (no <= 1) 
        flag = 0;
    else {
        for (int i = 2; i * i <= no; i++) {
            if (no % i == 0)
                flag = 0;
        }
    }
	if (flag)
        printf("%d is a Prime number.\n", no);
    else
        printf("%d is Not a Prime number.\n", no);
}
