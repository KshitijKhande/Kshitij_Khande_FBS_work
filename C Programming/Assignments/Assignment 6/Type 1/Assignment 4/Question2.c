//2. Print prime numbers in the given range 1 to n.//

#include <stdio.h>
void primeno();
void main() {
	primeno();
}
void primeno(){
	int no;
    printf("Enter a number:");
    scanf("%d",&no);
    printf("Prime Numbers between 1 to %d are: \n",no);
    
	for(int i=2;i<no;i++){
        int flag = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 0;
            }
        }

    if (flag)
        printf(" %d ", i);
	}
}
