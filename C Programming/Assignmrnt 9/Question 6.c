//6. Accept array and print only prime numbers of array.

#include <stdio.h>
int isPrime(int num);
void main() {
    int arr[5];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Prime numbers in the array are: ");
    for (int i = 0; i < 5; i++) {
        if (isPrime(arr[i])) 
            printf("%d ", arr[i]);
    }
    printf("\n");
}
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
