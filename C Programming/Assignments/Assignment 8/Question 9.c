//9. Reverse the given array.

#include<stdio.h>
void main(){
	int arr[5];
	printf("Enter the elements of the array: ");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array in reverse is :");
	for(int i=4;i>=0;i--)
		printf("%d ",arr[i]);
}