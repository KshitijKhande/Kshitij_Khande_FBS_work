//6. Accept array and print only prime numbers of array.

#include <stdio.h>
void main() {
    int arr[5];
	printf("Enter elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
	printf("Prime numbers in the array are: ");
    for (int i = 0; i < 5; i++){
        int num = arr[i],isPrime = 1;
		if(num <= 1)
            isPrime = 0;
        else{
            for(int j = 2; j <= num / 2; j++){
                if(num % j == 0){
                    isPrime = 0;
                    break;
                }
            }
        }
		if (isPrime) 
            printf("%d ", num);
    }
	printf("\n");
}
